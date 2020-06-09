import sys 
# cook your dish here
#	below 2 lines are for running code on your local machine 
#	Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

t =int(input())
for j in range(t):
    n,k = map(int,input().split())
    #n,q = map(int,input().split())
    arr = list(map(int,input().split()))
    loss=0
    for i in range(len(arr)):
        if arr[i]>k:
            loss=loss+(arr[i]-k)
    print(loss)
            
    
    
