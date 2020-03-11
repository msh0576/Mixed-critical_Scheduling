#!/usr/bin/env python
from TOSSIM import Tossim
from random import *
from TestNetworkMsg import *
import sys
import socket
import os
import time
import VCS_algorithm

enable_main=0;
if enable_main:
	def main():
		rssi_level=sys.argv[1]
		return {'y0':rssi_level}
	rssi_level=int(main()['y0'])
else:
	### Topology -60dBm (power) ###
    noise_offset = 1 #PDR:91%
	#noise_offset = 10 #PDR:85%
	#noise_offset = 20 #PDR:75%
	#noise_offset = 21 #PDR:68%
	#noise_offset = 22 #PDR:60%
	#noise_offset = 23 #PDR:47%
	#noise_offset = 25 #PDR:11%
    #noise_offset = 30 #PDR:0%
	### Topology -70dBm ###
	#noise_offset = 20 #PDR:0%
	#noise_offset = 10 #PDR:75%

t = Tossim([])

''' Debug '''
#t.addChannel("receive_ack", sys.stdout)
#t.addChannel("test", sys.stdout)
#t.addChannel("ScheduleConfig", sys.stdout)
#t.addChannel("CpmModelC", sys.stdout)
#t.addChannel("TossimPacketModelC", sys.stdout)
#t.addChannel("SimMoteRadioChannel", sys.stdout)
#t.addChannel("Gain", sys.stdout)
#t.addChannel("receive_power", sys.stdout)
#t.addChannel("SimMote_power", sys.stdout)
#t.addChannel("AM", sys.stdout)
#t.addChannel("Insert", sys.stdout)
t.addChannel("Task_T_Test", sys.stdout)
#t.addChannel("VCStest", sys.stdout)
#t.addChannel("receive", sys.stdout)
#t.addChannel("transmission", sys.stdout)
#t.addChannel("E2E_delay_Log_data", sys.stdout)
#t.addChannel("check_link_quality", sys.stdout)
t.addChannel("Util_Log_data", sys.stdout)


#Log Data
#Log = open("log.txt", "w")
#t.addChannel('radio_send', Log)

### Test VCS_algorithm	###
send_to_MAClayer = []
send_to_MAClayer = VCS_algorithm.Execution_func()

### Get UUnifast results ###
# Python to mote #
# Input:(Task1_T, Task2_T, ...)
print("Ok...")
if len(sys.argv) >= 2:
	Task_periods = []
	for Z in range(1,len(sys.argv)):
		print("Z:%s"%(Z))
		Task_periods.append(int(sys.argv[Z]))
	print("Task_perios:%s"%(Task_periods))
	t.sendTaskPeriods(Task_periods[0], Task_periods[1], 0, 0)
else:
	print("No parameter has been included")

### Python to mote ###
# Input: (nodeid, TxOffset, 0, 0)
for seq in send_to_MAClayer:
	t.sendVirtualSchedule(seq[0], seq[1], 0, 0)


r = t.radio()
L=list()
nodes = [1, 2, 3, 4, 51, 52]
for channel_1 in [22, 23, 24, 25, 26]:
	channel=channel_1
	neignbour_strength=-20;
	sync_rssi_strength=-10
	sync_rssi_strength_2 = -30


	for sensor in nodes:		# Set network topology
		r.add(sensor, 100, sync_rssi_strength, channel_1)	#add(source, destination, gain)
		r.add(100, sensor, sync_rssi_strength, channel_1)

		'''
		if sensor == 1:
			r.add(sensor, 100, sync_rssi_strength, channel_1)	#add(source, destination, gain)
			r.add(100, sensor, sync_rssi_strength, channel_1)
		elif sensor == 2:
			r.add(sensor, 100, sync_rssi_strength_2, channel_1)	#add(source, destination, gain)
			r.add(100, sensor, sync_rssi_strength_2, channel_1)
		elif sensor == 10:
			r.add(sensor, 100, sync_rssi_strength_2, channel_1)	#add(source, destination, gain)
			r.add(100, sensor, sync_rssi_strength_2, channel_1)
		'''


for channel in [22, 23, 24, 25, 26]:
	if channel == 22:
		f = open("topo_rssis_ch_22_ex2.txt", "r")##topo and RSSI strength
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##Topos in two channels are the same. RSSI different--yh
	elif channel == 23:
		f = open("topo_rssis_ch_23_ex2.txt", "r")
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##It seems that the r.add is modified by Bo--yh
	else:
		f = open("topo_rssis_ch_22_ex2.txt", "r")
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##It seems that the r.add is modified by Bo--yh


Allnodes = [100]
Allnodes = Allnodes + nodes
for node in Allnodes:
	m = t.getNode(node);
	for channel in [22, 23, 24, 25, 26]:
		if channel==22:
			noise = open("noise_ch_22_26_1000.txt", "r")	# Average -46dBm
			lines = noise.readlines()
		elif channel==23:
			noise = open("noise_ch_23_26_1000.txt", "r")
			lines = noise.readlines()
		for line in lines:
			strrr = line.strip()
			if (strrr != ""):
				val = int(strrr) + noise_offset
				#print("00000000")
				m.addNoiseTraceReading(val-45, channel)
				#print("11111111111")
		#print("222222")
		m.createNoiseModel(channel)
		#print("333333")
	m.turnOn()
	m.bootAtTime(0)
	#print "Booting ", node, " at time ", str(0)


run_count = 10 * 10000	# 1hour
Interference_time = 10 * 5000
flag = 1
while (t.time() <= 97656250*run_count):
	rcved = t.runNextEvent()

	# Wireless Interference
	if t.time() > 97656250*Interference_time and flag == 1:
		flag = 0
		noise_offset = 22
		for node in Allnodes:
			m = t.getNode(node);
			for channel in [22, 23, 24, 25, 26]:
				if channel==22:
					noise = open("noise_ch_22_26_1000.txt", "r")	# Average -46dBm
					lines = noise.readlines()
				elif channel==23:
					noise = open("noise_ch_23_26_1000.txt", "r")
					lines = noise.readlines()
				for line in lines:
					strrr = line.strip()
					if (strrr != ""):
						val = int(strrr) + noise_offset
						m.addNoiseTraceReading(val-45, channel)
				m.createNoiseModel(channel)
		# Send a Interference signal to MAC Layer
		t.sendTaskPeriods(Task_periods[0], Task_periods[1], -1, 0)


### Wireless Interference ###
