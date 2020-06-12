class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # you can also solve this problem using TWO_PASS algorithm using counting sort. (solution is accepted)
        # i.e First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, 
        # then 1's and followed by 2's. (solution is accepted)
        # Here I have uses ONE_PASS algorithm 
        
        low = 0
        mid = 0 
        high = len(nums)-1
        while mid<=high:
            if nums[mid]==0:
                temp = nums[mid]
                nums[mid]=nums[low]
                nums[low]=temp
                low+=1
                mid+=1
            elif nums[mid]==1:
                mid+=1
            elif nums[mid]==2:
                temp=nums[mid]
                nums[mid]=nums[high]
                nums[high]=temp
                high-=1
            
