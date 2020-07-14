import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')


# cook your dish here
t = int(input())

for i in range(t):
    n = int(input())
    list1 = list(map(int,input().split()))
    list2 = list(map(int,input().split()))
    
    small=0
    small1 = min(list1)
    small2 = min(list2)
    if small1>small2:
        small=small2
    else:
        small= small1
        
        
    hash1 = dict()
    for l in list1:
        hash1[l] = hash1.get(l,0)+1
    
    for m in list2:
        hash1[m] = hash1.get(m,0)-1
        
    flag=0
    list3=list()
    for key,value in hash1.items():
        if value%2!=0:
            flag=1
            break
        
        while value>=2:
            list3.append(key)
            value=value-2
        while value<=-2:
            list3.append(key)
            value=value+2
    
    if flag==1:
        print("-1")
        continue
    
    
    list3.sort()
    itr=len(list3)//2
    cost=0
    
    for j in range(itr):
        if(2*small< list3[j]):
            cost=cost+ (2*small)
        else:
            cost=cost+list3[j]
    
    print(cost)
    
    
    
        
        