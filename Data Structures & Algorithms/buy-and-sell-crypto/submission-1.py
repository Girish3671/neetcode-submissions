class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res=0
        z=prices[0]
        for i in prices:
            res=max(res,i-z)
            z=min(z,i)
        return res