import sys 

#   below 2 lines are for running code on your local machine 
#   Remove these 2 lines while using code online on codechef as they provide thier own input
sys.stdin = open("input.txt",'r')
sys.stdout = open("output.txt",'w')

# cook your dish here
t =int(input())
for j in range(t):
     n = int(input())
     arr = list(map(int,input().split()))
     first=0
     second=0
     #third=0
     flag=1
     for i in range(len(arr)):
         if arr[i]==5:
             first+=1
         elif arr[i]==10:
             second+=1
             if first>=1:
                 first-=1
             else:
                 flag=0
                 break
         else:
             if second>=1:
                 second-=1
             elif first>=2:
                 first-=2
             else:  
                 flag=0
                 break;
     if flag==0:
         print("NO")
     else:
         print("YES")