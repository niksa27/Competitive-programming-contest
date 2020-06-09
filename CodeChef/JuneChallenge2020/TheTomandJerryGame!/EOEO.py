import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t = int(input())
for j in range(t):
    no = int(input())
    while True:
        if no%2!=0:
            break
        else:
            no = no//2
    print(no//2)