import sys 

#below 2 lines are for running code on your local machine 
#Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t = int(input())
for j in range(t):
    n = int(input())
    ans=[]
    cnt=1
    ref=cnt
    for i in range(n):
        row=[]
        if(i%2==0):
            cnt=ref
            for k in range(n):
                row.append(cnt)
                cnt+=1
            ans.append(row)
            ref=cnt+n
        else:
            cnt=cnt+(n-1)
            for k in range(n):
                row.append(cnt)
                cnt-=1
            ans.append(row)
    
    for l in range(n):
        for m in range(n):
            print(ans[l][m],end=' ')
        print()
            