#!/usr/bin/env python
import commands
import sys

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

result_file_name = "E2EDelay_Result.txt"
result_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Result_file/"

average_file_name = "Average.txt"
average_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Result_file/"

### Task Period Setting ###
# it should be harmonic of all task periods
Each_task_T = [30, 30]

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

TOSSIM_simulation_times = 100;


### Execute TOSSIM and store the result ###
deleteContent(result_file_path + result_file_name)

result_f = open(result_file_path + result_file_name, 'a')
result_f.write("Each Task Period:%s\n\n"%(Each_task_T))
result_f.close()

print("Each Task Period:%s"%(Each_task_T))
print("SUPERFRAME_LEN:%s"%(SUPERFRAME_LEN))


for N in range(TOSSIM_simulation_times):
    exe_file_name = "Test"+str(N)+".txt"
    deleteContent(file_path + exe_file_name)
    fail, output = commands.getstatusoutput("python tossim-event-server.py" +" "+str(Each_task_T[0])+" "+str(Each_task_T[1]) + " >>"+str(file_path)+str(exe_file_name))
    #fail, output = commands.getstatusoutput("python tossim-event-server.py>>"+str(file_path)+str(exe_file_name))
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
    Task1_e2e_rcv_count = 0
    Task2_e2e_rcv_count = 0
    Task1_e2e_delay = [0 for _ in range(SUPERFRAME_LEN)]        # e2e delay boundary : slot0 ~ slot19
    Task2_e2e_delay = [0 for _ in range(SUPERFRAME_LEN)]        # e2e delay boundary : slot0 ~ slot19

    lines = f.readlines()
    # Store last line Data in a file
    for line in lines:
        # file each line: Node id, flow id, rcv_count, rcv_count_at_slot1, rcv_count_at_slot2, rcv_count_at_slot3, rcv_count_at_slot4, rcv_count_at_slot5, rcv_count_at_slot6, rcv_count_at_slot7, rcv_count_at_slot8, rcv_count_at_slot9
        line_list = line.split()
        if line_list:
            # cheack node id
            if line_list[NODEID] == str(Task1_destination):
                pass
            elif line_list[NODEID] == str(Task2_destination):
                if line_list[FLOWID] == str(Lo_task_id):
                    Task2_e2e_rcv_count = line_list[RCV_COUNT]
                    for slot in range(SUPERFRAME_LEN):
                        Task2_e2e_delay[slot] = (line_list[3 + slot])
    # File Close
    f.close()

    # Store total result in a file
    result_f = open(result_file_path + result_file_name, 'a')
    #result_f.write("Task1_e2e_rcv_count, slot0~11: %s %s %s %s %s %s %s %s %s %s %s %s %s \n"%( Task1_e2e_rcv_count, Task1_e2e_delay[0], Task1_e2e_delay[1], Task1_e2e_delay[2], Task1_e2e_delay[3], Task1_e2e_delay[4], Task1_e2e_delay[5], Task1_e2e_delay[6], Task1_e2e_delay[7], Task1_e2e_delay[8], Task1_e2e_delay[9], Task1_e2e_delay[10], Task1_e2e_delay[11]))
    result_f.write("Task2_e2e_rcv_count, slot0~29: %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n"%( Task2_e2e_rcv_count, Task2_e2e_delay[0], Task2_e2e_delay[1], Task2_e2e_delay[2], Task2_e2e_delay[3], Task2_e2e_delay[4], Task2_e2e_delay[5], Task2_e2e_delay[6], Task2_e2e_delay[7], Task2_e2e_delay[8], Task2_e2e_delay[9], Task2_e2e_delay[10], Task2_e2e_delay[11], Task2_e2e_delay[12], Task2_e2e_delay[13], Task2_e2e_delay[14], Task2_e2e_delay[15], Task2_e2e_delay[16], Task2_e2e_delay[17], Task2_e2e_delay[18], Task2_e2e_delay[19], Task2_e2e_delay[20], Task2_e2e_delay[21], Task2_e2e_delay[22], Task2_e2e_delay[23], Task2_e2e_delay[24], Task2_e2e_delay[25], Task2_e2e_delay[26], Task2_e2e_delay[27], Task2_e2e_delay[28], Task2_e2e_delay[29]))
    #result_f.write("Relay ID, rcv_task1, rcv_task2: %s %s %s\n", Task2_relay1, Task2_relay1_rcv_count_for_task1, Task2_relay1_rcv_count_for_task2)
    #print("3_rcv_count, 5_rcv_count, 7_rcv_count, 51_rcv_count, slot1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12: %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s"%(relay1_rcv_count, relay2_rcv_count, relay3_rcv_count, total_e2e_dest_rcv_count, total_e2e_delay[1], total_e2e_delay[2], total_e2e_delay[3], total_e2e_delay[4], total_e2e_delay[5], total_e2e_delay[6], total_e2e_delay[7], total_e2e_delay[8], total_e2e_delay[9], total_e2e_delay[10], total_e2e_delay[11], total_e2e_delay[12]))

    result_f.close()

# Average N simulation results
result_f = open(result_file_path + result_file_name, 'r')

lines = result_f.readlines()
Total_count = 0
Task2_e2e_delay = [0 for _ in range(SUPERFRAME_LEN)]
Task2_e2e_delay_aver = [0 for _ in range(SUPERFRAME_LEN)]
Task2_e2e_delay_percentage = [0 for _ in range(SUPERFRAME_LEN)]
Task2_e2e_rcv_count = 0
Task2_e2e_rcv_count_aver = 0
for line in lines:
    line_list = line.split()
    if line_list:
        # check task id
        if line_list[0] == "Task2_e2e_rcv_count,":
            line_list_size = len(line_list)
            Total_count = Total_count + 1
            for idx in range(2,line_list_size):
                if idx == 2:
                    Task2_e2e_rcv_count = Task2_e2e_rcv_count + int(line_list[idx])
                else:
                    Task2_e2e_delay[idx-3] = Task2_e2e_delay[idx-3] + int(line_list[idx])

print("Task2_e2e_delay:%s"%(Task2_e2e_delay))
print("Task2_e2e_rcv_count:%s"%(Task2_e2e_rcv_count))
print("Total_count:%s"%(Total_count))

Task2_e2e_rcv_count_aver = float(Task2_e2e_rcv_count)/float(Total_count)
for idx in range(SUPERFRAME_LEN):
    Task2_e2e_delay_aver[idx] = float(Task2_e2e_delay[idx])/float(Total_count)
    Task2_e2e_delay_percentage[idx] = (Task2_e2e_delay_aver[idx]/Task2_e2e_rcv_count_aver)

print("Task2_e2e_delay_aver:%s"%(Task2_e2e_delay_aver))
print("Task2_e2e_rcv_count_aver:%s"%(Task2_e2e_rcv_count_aver))
print("Task2_e2e_delay_percentage: "),
for idx in range(SUPERFRAME_LEN):
    print("%s "%(Task2_e2e_delay_percentage[idx])),

result_f.close()
