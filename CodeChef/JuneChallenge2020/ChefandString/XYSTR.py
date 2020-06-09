import sys 

#	below 2 lines are for running code on your local machine 
#	Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t=int(input())
for j in range(t):
    s = input()
    i=0
    cnt=0
    while i<(len(s)-1):
        if s[i]!=s[i+1]:
            cnt+=1
            i+=2
        else:
            i+=1
    print(cnt)
            