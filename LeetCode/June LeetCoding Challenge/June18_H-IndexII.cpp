class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(n<1)
            return 0;
        if(citations[0]==0 && citations[n-1]==0)
            return 0;
        
        int low=0;
        int high=n-1;
        int pos=0;
        while(low<high)
        {
            int mid = low+(high-low)/ 2;
            if((n-mid) >citations[mid])
                low=mid+1;
            else
                high=mid;
        }
                
        return n-low;
    }
};
