class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dict={}
        for n in nums:
            if n in dict:
                dict[n]+=1
            else:
                dict[n]=1
        for i in dict:
            if dict[i]>=2:
                return True
        return False

         