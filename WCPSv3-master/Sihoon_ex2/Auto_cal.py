#!/usr/bin/env python

# Initilize file name that extract log data at
file_name = []
file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Log_file/"

result_file_name = "Result.txt"
result_file_path = "/home/sihoon/WCPSv3-master/Sihoon_ex2/Result_file/"

FILE_NUMBER = 100    # Test0.txt ~ Test99.txt
for file_idx in range(FILE_NUMBER):
    tmp_name = "Test"+str(file_idx)+".txt"
    #print("tmp_name:%s"%(tmp_name))
    file_name.append(tmp_name)



# Index
NODEID = 0
FLOWID = 1
RCV_COUNT = 2
RCV_SLOT1 = 3
RCV_SLOT2 = 4
RCV_SLOT3 = 5
RCV_SLOT4 = 6
RCV_SLOT5 = 7
RCV_SLOT6 = 8
RCV_SLOT7 = 9
RCV_SLOT8 = 10
RCV_SLOT9 = 11
E2E_DELAY_BOUNDARY = 10     # check slot0 ~ slot9

# receive node id
e2e_destination = 51        # topology: 1->3->5->51
e2e_relay1 = 3
e2e_relay2 = 5

# delete content of a file
def deleteContent(fName):
    with open(fName,'w'):
        pass

# Initilize a Result file and log data files
deleteContent(result_file_path + result_file_name)

# Repeat in file_name[]
# Extract essential data in a simulation
for fname in file_name:
    # Check file existance
    try:
        f = open(file_path + fname,'r')
    except:
        print("No file:%s"%(fname))
        exit(1)

    # total result variable
    total_e2e_dest_rcv_count = 0
    relay1_rcv_count = 0
    relay2_rcv_count = 0
    total_e2e_delay = [0 for _ in range(E2E_DELAY_BOUNDARY)]        # e2e delay boundary : slot0 ~ slot9


    lines = f.readlines()
    for line in lines:
        # file each line: Node id, flow id, rcv_count, rcv_count_at_slot1, rcv_count_at_slot2, rcv_count_at_slot3, rcv_count_at_slot4, rcv_count_at_slot5, rcv_count_at_slot6, rcv_count_at_slot7, rcv_count_at_slot8, rcv_count_at_slot9
        line_list = line.split()
        if line_list:
            # cheack node id
            if line_list[NODEID] == str(e2e_destination):
                total_e2e_dest_rcv_count = line_list[RCV_COUNT]     # receive packet count
                for slot in range(1,E2E_DELAY_BOUNDARY):
                    total_e2e_delay[slot] = (line_list[RCV_SLOT1-1 + slot])
            elif line_list[NODEID] == str(e2e_relay1):
                relay1_rcv_count = line_list[RCV_COUNT]
            elif line_list[NODEID] == str(e2e_relay2):
                relay2_rcv_count = line_list[RCV_COUNT]

    # File Close
    f.close()

    # Store total result in a file
    result_f = open(result_file_path + result_file_name, 'a')
    result_f.write("3_rcv_count, 5_rcv_count, 51_rcv_count, slot1, 2, 3, 4, 5, 6, 7, 8, 9: %s %s %s %s %s %s %s %s %s %s %s %s\n"%(relay1_rcv_count, relay2_rcv_count, total_e2e_dest_rcv_count, total_e2e_delay[1], total_e2e_delay[2], total_e2e_delay[3], total_e2e_delay[4], total_e2e_delay[5], total_e2e_delay[6], total_e2e_delay[7], total_e2e_delay[8], total_e2e_delay[9]))
    print("3_rcv_count, 5_rcv_count, 51_rcv_count, slot1, 2, 3, 4, 5, 6, 7, 8, 9: %s %s %s %s %s %s %s %s %s %s %s %s"%(relay1_rcv_count, relay2_rcv_count, total_e2e_dest_rcv_count, total_e2e_delay[1], total_e2e_delay[2], total_e2e_delay[3], total_e2e_delay[4], total_e2e_delay[5], total_e2e_delay[6], total_e2e_delay[7], total_e2e_delay[8], total_e2e_delay[9]))

    result_f.close()
