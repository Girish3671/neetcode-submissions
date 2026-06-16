class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        res=0
        temp_list=set(nums)
        for i in range(len(nums)):
            streak,curr=0,nums[i]
            while(curr in temp_list):
                streak+=1
                curr+=1
            res=max(streak,res)
        return res