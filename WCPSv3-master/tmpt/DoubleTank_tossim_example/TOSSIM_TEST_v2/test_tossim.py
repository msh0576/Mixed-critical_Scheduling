#!/usr/bin/env python
from TOSSIM import Tossim
from random import *
from TestNetworkMsg import *
import sys
import socket
import os
import time

enable_main=0;
if enable_main:
	def main():
		rssi_level=sys.argv[1]
		return {'y0':rssi_level}
	rssi_level=int(main()['y0'])
else:

	noise_offset = 7 #80

    #noise_offset = 7 #84
	#noise_offset = 9 #82
	#noise_offset = 10 #81
	#noise_offset = 11 #80
	#noise_offset = 12 #79
	#noise_offset = 13 #78
	#noise_offset = 14 #77
	#noise_offset = 15 #76
	#noise_offset = 16 #75
	#noise_offset = 17 #74   ##noise levels are changed by offset change--yh
	#noise_offset = 18 #73
	#noise_offset = 19 #72
	#noise_offset = 14 #77
	#noise_offset = 16 #75
	#noise_offset = 18 #73
t = Tossim([])
t.addChannel('printf', sys.stdout)
t.addChannel("DataFeedback", sys.stdout)
'''
print "Activate debug message on channel boot"
t.addChannel("boot",sys.stdout);
print "Activate debug message on channel radio_sent"
t.addChannel("radio_sent",sys.stdout);
print "Activate debug message on channel role"
t.addChannel("role",sys.stdout);
print "Activate debug message on channel radio_send"
t.addChannel("radio_send",sys.stdout);
print "Activate debug message on channel radio_packet"
t.addChannel("radio_packet",sys.stdout);
print "Activate debug message on channel radio_rec"
t.addChannel("radio_rec",sys.stdout);
'''
'''
r = t.radio()
L=list()
for channel_1 in [22, 23, 24, 25, 26]:
	channel=channel_1
	neignbour_strength=-20;
	sync_rssi_strength=-10

	for sensor in [11, 12, 13, 14, 15, 16, 10]:
		r.add(sensor, 0, sync_rssi_strength, channel_1)
		r.add(0, sensor, sync_rssi_strength, channel_1)

f = open("csi_topo_rssis_ch_22.txt", "r")##topo and RSSI strength
for line in f:
	s = line.split()
	if s:
		#print " ", s[0], " ", s[1], " ", s[2];
		r.add(int(s[0]), int(s[1]), float(s[2]) - 4, 22)##Topos in two channels are the same. RSSI different--yh


for node in [0, 11, 12, 13, 14, 15, 16, 10]:
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
				m.addNoiseTraceReading(val-45, channel)
		m.createNoiseModel(channel);
	m.turnOn()
	m.bootAtTime(0)
	#print "Booting ", node, " at time ", str(0)
'''

r = t.radio()
L=list()
for channel_1 in [22, 23, 24, 25, 26]:
	channel=channel_1
	neignbour_strength=-20;
	sync_rssi_strength=-10

	for sensor in [11, 12, 13, 14, 15, 16, 10]:
		r.add(sensor, 0, sync_rssi_strength, channel_1)
		r.add(0, sensor, sync_rssi_strength, channel_1)

f = open("ex2_topo_rssis_ch_22.txt", "r")##topo and RSSI strength
for line in f:
	s = line.split()
	if s:
		#print " ", s[0], " ", s[1], " ", s[2];
		r.add(int(s[0]), int(s[1]), float(s[2]) - 4, 22)##Topos in two channels are the same. RSSI different--yh



for node in [0, 11, 12, 13, 14, 15, 16, 10]:
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
				m.addNoiseTraceReading(val-45, channel)
		m.createNoiseModel(channel);
	m.turnOn()
	m.bootAtTime(0)


# Create a TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#server_address = ('localhost', 10032)
server_address = ('127.0.0.1', 10035)
print >>sys.stderr, 'starting up on %s port %s' % server_address
sock.bind(server_address)
sock.listen(1)


run_count = 1;
#0 means not received.

while True:
    connection, client_address = sock.accept()
    try:
        # print >>sys.stderr, 'Client call, No.', run_count
        while True:
            data = connection.recv(30)
            if data:

            	if run_count % 18 == 0:
            		m = t.getNode(11);

            	rcvedlist = [0, 0, 0, 0, 0, 0, 0, 0]
            	while (t.time() <= 97656250*run_count): # here the 97656250 represents 10ms
            		rcved = t.runNextEvent()
            		#print("rcved:",rcved)
            		if rcved == 2:
            			rcvedlist[0] = 1; # flow 1 has been received through the WSN
            		elif rcved == 4:
            			rcvedlist[1] = 1; # flow 2 has been received through the WSN
            		elif rcved == 8:
            			rcvedlist[2] = 1;
            		elif rcved == 16:
            			rcvedlist[3] = 1;
            		elif rcved == 32:
            			rcvedlist[4] = 1;
            		elif rcved == 64:
            			rcvedlist[5] = 1;
            		elif rcved == 128:
            			rcvedlist[6] = 1;
            		elif rcved == 256:
            			rcvedlist[7] = 1;

        		#print("rcvedList:",rcvedlist)
            	run_count = run_count + 1;

            	reception = str(rcvedlist[0]) + ',' + str(rcvedlist[1]) + ',' + str(rcvedlist[2]) + ',' + str(rcvedlist[3]) + \
            	',' + str(rcvedlist[4]) + ',' + str(rcvedlist[5]) + ',' + str(rcvedlist[6]) + ',' + str(rcvedlist[7]);
            	#print reception
            	connection.sendall(reception)
            else:
            	break
    finally:
        connection.close()




'''
Node=[0 for _ in range(4)]
for i in [0,1,2,3]:
	Node[i] = t.getNode(i)
	#print("node[{0}] is On?: {1}".format(Node[i],Node[i].isOn()))
'''
#NextEvent()

#for i in range(1000):
	#t.runNextEvent()
