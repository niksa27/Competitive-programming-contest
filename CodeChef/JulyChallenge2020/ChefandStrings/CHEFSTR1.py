import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t = int(input())

for i in range(t):
    n  =int(input())
    arr = list(map(int,input().split()))
    
    skip =0
    for j in range(n-1):
        skip=skip+(abs(arr[j+1]-arr[j]) -1)
    print(skip)
