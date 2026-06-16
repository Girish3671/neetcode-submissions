class Solution:
    def maxArea(self, heights: List[int]) -> int:
        res=0
        for i in range(len(heights)-1):
            area=0
            for j in range(i+1,len(heights)):
                heighty=min(heights[i],heights[j])
                widety=j-i
                area=heighty*widety
                res=max(area,res)
        return res
        