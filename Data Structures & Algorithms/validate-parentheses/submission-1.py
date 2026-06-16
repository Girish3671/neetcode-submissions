class Solution:
    def isValid(self, s: str) -> bool:
        brac={")":"(","}":"{","]":"["}
        stack=[]
        for i in s:
            if i not in brac:
                stack.append(i)
                continue
            else:
                if stack and stack[-1]==brac[i]:
                    stack.pop()
                else:
                    return False
        return not stack
                