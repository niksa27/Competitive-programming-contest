import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t = int(input())

for i in range(t):
    n=int(input())
    chef=0
    monty=0
    for j in range(n):
        a ,b = map(int,input().split())
        suma = 0
        sumb = 0
        
        while a!=0:
            d=a%10
            a=a//10
            suma+=d

        while b!=0:
            d=b%10
            b=b//10
            sumb+=d

        if suma>sumb:
            chef+=1
        elif suma==sumb:
            chef+=1
            monty+=1
        else:
            monty+=1
            
    if monty>chef:
        print("1",monty)
    elif monty==chef:
        print("2",monty)
    else:
        print("0",chef)
