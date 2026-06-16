class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        count=0
        res=[]
        for i in range(len(s)):
            res=[]
            res.append(s[i])
            for j in range(i+1,len(s)):
                if s[j] not in res:
                    res.append(s[j])
                else:
                    break
            count=max(count,len(res))
        return count