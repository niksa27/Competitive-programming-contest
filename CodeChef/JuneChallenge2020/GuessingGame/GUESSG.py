# cook your dish here

# As it grader based problem No output.txt file  
# & input file contains sample only how the interaction happens between grader and you

n = int(input())
flag=0
low=1
high=n
j=1

for i in range(300):
    print(j)
    ch = input()
    if ch=='E':
        exit()
    if ch=='L' and j==1:
        continue
    if ch=='G' and j==1:
        j = (low+high) // 2
        continue
    
    if flag==0:
        flag=1
        continue
    if flag==1:
        if ch=='L':
            high=j-1
            j=(low+high) // 2
        elif ch=='G':
            low=j+1
            j=(low+high) // 2
            
        flag=0
            
    
