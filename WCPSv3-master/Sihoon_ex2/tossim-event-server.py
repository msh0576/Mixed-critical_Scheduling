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
	noise_offset = 1
    #noise_offset = 7 #84
	#noise_offset = 9 #82
	#noise_offset = 10 #81	#OK
	#noise_offset = 11 #80	#NO
	#noise_offset = 12 #78	#NO
	#noise_offset = 13 #78	#Ok
	#noise_offset = 14 #77	#NO
	#noise_offset = 17 #74   ##noise levels are changed by offset change--yh
	#noise_offset = 19 #72

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
#t.addChannel("Test_a", sys.stdout)
#t.addChannel("VCStest", sys.stdout)
#t.addChannel("receive", sys.stdout)
#t.addChannel("transmission", sys.stdout)
t.addChannel("Log_data", sys.stdout)

#Log Data
#Log = open("log.txt", "w")
#t.addChannel('radio_send', Log)

''' Test VCS_algorithm	'''

send_to_MAClayer = []
send_to_MAClayer = VCS_algorithm.Execution_func()

### Python to mote ###
# Input: (nodeid, TxOffset, 0, 0)
for seq in send_to_MAClayer:
	t.sendVirtualSchedule(seq[0], seq[1], 0, 0)


r = t.radio()
L=list()
for channel_1 in [22, 23, 24, 25, 26]:
	channel=channel_1
	neignbour_strength=-20;
	sync_rssi_strength=-10
	sync_rssi_strength_2 = -30


	for sensor in [1, 2, 3, 4, 5, 7, 51, 52]:		# Set network topology
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
		f = open("topo_rssis_ch_22_ex1.txt", "r")##topo and RSSI strength
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##Topos in two channels are the same. RSSI different--yh
	elif channel == 23:
		f = open("topo_rssis_ch_23_ex1.txt", "r")
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##It seems that the r.add is modified by Bo--yh
	else:
		f = open("topo_rssis_ch_22_ex1.txt", "r")
		for line in f:
			s = line.split()
			if s:
				#print " ", s[0], " ", s[1], " ", s[2];
				r.add(int(s[0]), int(s[1]), float(s[2]) - 4, channel)##It seems that the r.add is modified by Bo--yh



for node in [100, 1, 2, 3, 4, 5, 7, 51, 52]:
	m = t.getNode(node);
	for channel in [22, 23, 24, 25, 26]:
		if channel==22:
			noise = open("noise_ch_22_26_1000.txt", "r")
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


run_count = 10 * 1101;
#0 means not received.
while (t.time() <= 97656250*run_count):
	rcved = t.runNextEvent()

'''
for i in range(0, 500):
  t.runNextEvent();
'''
