#!/usr/bin/env python
import commands
import sys
import os
import matlab.engine
from scipy import io
import socket
import time




def gcd(a,b):
    """Compute the greatest common divisor of a and b"""
    while b > 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    """Compute the lowest common multiple of a and b"""
    return a * b / gcd(a, b)

# Execute txt file
def faile_check(fail):
	if fail:
		print 'Failed\n'
		sys.exit(1)

matlab_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/RobotArm/"

tossim_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Log_file/"

print("Ready to TOSSIM")


### Task Period Setting ###
Each_task_T = [10, 25]
Task_maxTx = [4, 2]


# Create a TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
#server_address = ('localhost', 10032)
server_address = ('127.0.0.1', 10030)
print >>sys.stderr, 'starting up on %s port %s' % server_address
sock.bind(server_address)
sock.listen(1)
N=1
while True:
    connection, client_address = sock.accept()
    try:
        # print >>sys.stderr, 'Client call, No.', run_count
        while True:
            data = connection.recv(64)
            if data:
                ### Open tossim-event-server.py ###
                if str(data) == 'Open TOSSIM':
                    print("%s-th TOSSIM"%(N))
                    ### Tossim ###
                    exe_file_name = "Test"+str(N)+".txt"
                    fail, output = commands.getstatusoutput("python tossim-event-server.py" +" "+str(Each_task_T[0]) +" "+str(Task_maxTx[0])+" "+str(Each_task_T[1])+" "+str(Task_maxTx[1]) + " >>"+str(tossim_file_path)+str(exe_file_name))
                    #fail, output = commands.getstatusoutput("python tossim-event-server.py" +" "+str(Each_task_T[0])+" "+str(Each_task_T[1]) + " >>"+str(file_path)+str(exe_file_name))
                    faile_check(fail)
                    N = N+1
    finally:
        connection.close()
