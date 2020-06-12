class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // you can also solve this problem using TWO_PASS algorithm using counting sort. (solution is accepted)
        // i.e First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, 
        // then 1's and followed by 2's. (solution is accepted)
        // Here I have uses ONE_PASS algorithm 
        
        int low=0;
        int mid=0;
        int high = nums.size()-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp; 
                high--;
            }
        }
    }
};
