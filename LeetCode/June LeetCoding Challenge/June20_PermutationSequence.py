class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        l =list()
        for i in range(1,n+1):
            l.append(str(i))
        s = ''.join(l)

        per = permutations(s)
        for l in per:
            k-=1
            if k==0:
                break
        ans = ''.join(l)
        return ans
            
            
        
        
