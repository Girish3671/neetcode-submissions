class Solution:
    def isValid(self, s: str) -> bool:
        brac={")":"(","}":"{","]":"["}
        stack=[]
        for i in s:
            if i in brac:
                if stack and stack[-1]==brac[i]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(i)
        if stack:
            return False
        else:
            return True
                