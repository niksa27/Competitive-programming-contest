class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n=len(citations)
        if n<1: 
            return 0
        if citations[0]==0 and citations[n-1]==0:
            return 0
        
        low=0
        high=len(citations)-1
        pos=0
        while low<high:
            mid = low+(high-low)//2
            if (n-mid) >citations[mid] :
                low=mid+1
            else:
                high=mid
                
        return n-low
                
        
