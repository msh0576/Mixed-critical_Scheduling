#!/usr/bin/env python



def file_test():
    print('Hello Python')



if __name__=='__main__':

    #   Initialize Basic network topology
    Primarypath = [
    [0, 0, 0],
    [0, 51, 0],
    [0, 0, 52]
    ]

    Backuppath = [
    [0, 0, 0],
    [0, 52, 0],
    [0, 0, 51]
    ]

    flow_destination = [0, 51, 52]
    flow_source = [0, 1, 2]
    


    print(Primarypath)
