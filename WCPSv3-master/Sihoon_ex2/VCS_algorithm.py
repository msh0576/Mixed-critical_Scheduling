#!/usr/bin/env python



def file_test():
    print('Hello Python')

# Primary Conflict
# Input: nodeid, E
# Output: edge set that impose primary conflict
def Primary_conflict(Edge_set, nodeid, primary_path):
    primary_conflict_set = []
    tmp_Edge_set = Edge_set
    length = len(tmp_Edge_set)

    for edge in tmp_Edge_set:
        rev_edge = list(reversed(edge))
        if primary_path == edge[0] and nodeid != edge[1]:
            primary_conflict_set.append(edge)
        elif primary_path == rev_edge[0] and nodeid != rev_edge[1]:
            primary_conflict_set.append(rev_edge)
    return primary_conflict_set

# a source path from each node to flow destination
def Source_path(flowid, nodeid, path):
    mydesti = Primary_path[flowid][nodeid]
    path.append(mydesti)

    if mydesti == flow_destination[flowid]:
        return -1
    Source_path(flowid, mydesti, path)


if __name__=='__main__':

    ''' Initialize Basic network topology'''
    # col: nodeid,  row: flowid
    Primary_path = [
    [0, 0, 0, 0, 0],
    [0, 3, 0, 51, 51],
    [0, 0, 4, 52, 52]
    ]

    Backup_path = [
    [0, 0, 0, 0, 0],
    [0, 4, 0, 4, 0],
    [0, 0, 3, 0, 3]
    ]

    flow_destination = [0, 51, 52]
    flow_source = [0, 1, 2]

    # Make Vertex and Edge
    Vertex = [1, 2, 3, 4, 51, 52]
    Edge = [
    [1, 3], [1, 4],
    [2, 3], [2, 4],
    [3, 4], [3, 51], [3, 52],
    [4, 51], [4, 52]
    ]

    #   Test node id
    test_nodeid = 1
    test_flowid = 1
    flowid = [1, 2]



    '''Build a source path'''

    # build source_path_set for every flow
    source_path = []
    source_path_set = {}

    for i in flowid:
        source_path_set['Flow_%s'%(i)] = []
        Source_path(i, flow_source[i], source_path_set['Flow_%s'%(i)])

    #print(source_path_set)



    '''Basic Scheduler'''
    primary_conflict_set = Primary_conflict(Edge, test_nodeid, Primary_path[test_flowid][test_nodeid])
    Scheduled_Edge = []
    def Basic_Scheduler(sourcepath_set_input, edge_input):
        pre_offset = 0
