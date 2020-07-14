# cook your dish here
import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')


t = int(input())

for i in range(t):
    k = int(input())
    arr = list()
    for j in range(64):
        arr.append('X')
    
    arr[0]='O'
    for j in range(1,k):
        arr[j]='.'
    
    for j in range(64):
        print(arr[j],end='')
        if (j+1)%8==0:
            print(' ')
        