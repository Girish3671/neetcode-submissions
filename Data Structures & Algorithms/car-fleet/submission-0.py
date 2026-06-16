class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        ps=list(zip(position,speed))
        ps.sort(reverse=True)
        stack=[]
        for p,s in ps:
            stack.append((target-p)/s)
            if len(stack)>=2 and stack[-1]<=stack[-2]:
                stack.pop()
        return len(stack) 