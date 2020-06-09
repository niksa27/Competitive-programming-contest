class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s)>len(t):
            return False
        if(len(s)==0 or len(t)==0):
            return True
        c = s[0]
        j=0
        for i in range(len(t)):
            if c==t[i]:
                j+=1
                if j==len(s):
                    return True
                else:
                    c=s[j]
        return False
        
