class Solution:
  
    def check(self,i,target):
        for z in i:
            if z==target:
                return 1
        return 0

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        res=-23
        for i in matrix:
            a=self.check(i,target)
            res=max(res,a)
        if res==1:
            return True
        else:
            return False
        
        