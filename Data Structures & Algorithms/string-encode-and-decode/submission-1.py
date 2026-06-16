class Solution:
    def encode(self, strs: List[str]) -> str:
        s=""
        for i in strs:
            s+=i+"|#"
        return s
    def decode(self, s: str) -> List[str]:
        z=s.split("|#")
        return z[:-1]

        
