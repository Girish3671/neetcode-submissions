class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}
        for i,a in enumerate(nums):
            x=target-a #val->index
            if x in map:
                return [map[x],i]
            map[a]=i