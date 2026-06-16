class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count={}
        res=[]
        for i in nums:
            count[i]=1+count.get(i,0)
        sorted_dic=dict(sorted(count.items(),key=lambda item:item[1],reverse=True))
        for i in sorted_dic:
            res.append(i)
        return res[:k]