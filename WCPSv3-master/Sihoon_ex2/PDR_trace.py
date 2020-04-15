#!/usr/bin/env python
import commands
import sys
import matplotlib.pyplot as plt



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

# Input: Each task utilization, Each task execution time
# Output: Each task periods
def Task_Periods(Each_task_U, Each_task_C):
	Task1_U = float(Each_task_U[0])
	Task2_U = float(Each_task_U[1])
	Task1_C = float(Each_task_C[0])
	Task2_C = float(Each_task_C[1])

	Task1_T = int(round(Task1_C / Task1_U))
	Task2_T = int(round(Task2_C / Task2_U))

	return [Task1_T, Task2_T]


# delete content of a file
def deleteContent(fName):
	with open(fName,'w'):
		pass

# Initilize file name that extract log data at
file_name = []
file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Log_file/"

result_file_name = "PDR_trace_Result.txt"
result_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Result_file/"

### Task Period Setting ###
# it should be harmonic of all task periods
Each_task_T = [25, 25]
Task_maxTx = [2, 2]

### Initilization ###
# Index
NODEID = 0
FLOWID = 1
RCV_COUNT = 2
SUPERFRAME_LEN = lcm(Each_task_T[0], Each_task_T[1])     # check slot0 ~ slot19

# receive node id
Task1_destination = 51        # topology: 1->3->4->51
Task2_destination = 52        # topology: 2->3->4->52

# Task id
Hi_task_id = 1
Lo_task_id = 2

### Execute TOSSIM and store the result ###
deleteContent(result_file_path + result_file_name)

result_f = open(result_file_path + result_file_name, 'a')
result_f.write("Each Task Period:%s\n\n"%(Each_task_T))
result_f.close()

print("Each Task Period:%s"%(Each_task_T))
print("SUPERFRAME_LEN:%s"%(SUPERFRAME_LEN))

TOSSIM_simulation_times = 1;
for N in range(TOSSIM_simulation_times):
    exe_file_name = "Test"+str(N)+".txt"
    deleteContent(file_path + exe_file_name)
    fail, output = commands.getstatusoutput("python tossim-event-server.py" +" "+str(Each_task_T[0]) +" "+str(Task_maxTx[0])+" "+str(Each_task_T[1])+" "+str(Task_maxTx[1]) + " >>"+str(tossim_file_path)+str(exe_file_name))
    faile_check(fail)
    #print output

### Gather results from N Test files to a file ###
file_name = []
for file_idx in range(TOSSIM_simulation_times):
    tmp_name = "Test"+str(file_idx)+".txt"
    #print("tmp_name:%s"%(tmp_name))
    file_name.append(tmp_name)

# Extract essential data in a simulation
for fname in file_name:
    # Check file existance
    try:
        f = open(file_path + fname,'r')
    except:
        print("No file:%s"%(fname))
        exit(1)

    # total result variable


    lines = f.readlines()

    PDR = {str(Task1_destination):{'SNR':[],'time':[]},
            str(Task2_destination):{'SNR':[],'time':[]}}
    print(PDR)
    # Store last line Data in a file
    for line in lines:
        # file each line: Node id, flow id, rcv_count, rcv_count_at_slot1, rcv_count_at_slot2, rcv_count_at_slot3, rcv_count_at_slot4, rcv_count_at_slot5, rcv_count_at_slot6, rcv_count_at_slot7, rcv_count_at_slot8, rcv_count_at_slot9
        line_list = line.split()
        if line_list:
            # cheack node id
            #print(line_list)
            if line_list[0] == "Node:":
                if line_list[1] == str(Task1_destination):
                    PDR[str(Task1_destination)]['SNR'].append(float(line_list[3]))
                    PDR[str(Task1_destination)]['time'].append(float(line_list[5]))
                elif line_list[1] == str(Task2_destination):
                    PDR[str(Task2_destination)]['SNR'].append(float(line_list[3]))
                    PDR[str(Task2_destination)]['time'].append(float(line_list[5]))
    print(PDR)

    # File Close
    f.close()

plt.plot(PDR[str(Task2_destination)]['time'], PDR[str(Task2_destination)]['SNR'])
plt.show()