import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')
# cook your dish here
t =int(input())

for i in range(t):
    n = int (input())
    limit = 4*n-1
    hash1 = dict()
    hash2 = dict()
    for j in range(limit):
        x,y = map(int,input().split())
        hash1[x] = hash1.get(x,0)+1
        if hash1[x]==2:
            hash1[x]=0

        hash2[y]= hash2.get(y,0)+1
        if hash2[y]==2:
            hash2[y]=0;
    
    for key,value in hash1.items():
        if value==1:
            print(key,end=' ')
            break
    
    for key,value in hash2.items():
        if value==1:
            print(key)
            break
        
                     
                     