import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')


# cook your dish here
t = int(input())

for i in range(t):
    n,x = map(int,input().split())
    arr = list(map(int,input().split()))
    
    arr.sort()
    
    days=0
    rem=0
    
    for k in range(n):
        while(arr[k]>x):
            days+=1
            x=x*2
        
        if arr[k]>=(x/2):
            days+=1
            x=arr[k]*2
        else:
            rem+=1
        
    print(days+rem)