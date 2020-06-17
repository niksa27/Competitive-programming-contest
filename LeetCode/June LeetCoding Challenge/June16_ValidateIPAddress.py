class Solution:
    def validIPAddress(self, IP: str) -> str:
        flag=0
        pos = IP.find('.')
        cnt=0
        if pos!=-1:
            nums = IP.split('.')
            # for each number 
            for num in nums:
                #check if repeated 0's or negative number 
                if num.startswith('0') or num.startswith('-'):
                    if len(num)>1:
                        flag=1
                        break
                
                #check if string can be converted to int (to avoid callback if not )
                x = num.isdigit()
                if x:
                    num = int(num)
                else:
                    flag=1
                    break
                
                # check if number is not greater than 255
                if not(num>=0 and num<256):
                    flag=1
                    break
                    
                else:
                    cnt+=1       # to keep track of 4 number seperated by '.'
                    
            if flag==0 and cnt==4:
                return "IPv4"
        else:
            nums = IP.split(':')
            for num in nums:
                # to check if number is hexadecimal (0-9 and A-F and a-f) only
                for n in num:
                    if not(n>='0'and n<='9') and not(n>='A' and n<='F') and not(n>='a' and n<='f'):
                        flag=1
                        break;
                
                # length of : seperated string 
                if len(num)<1 or len(num)>4:
                    flag=1
                    break
                    
                else:
                    cnt+=1     # to keep track of 8 number seperated by ':'

            if flag==0 and cnt==8:
                return "IPv6"
            
        return "Neither"
                    
            
        
        
