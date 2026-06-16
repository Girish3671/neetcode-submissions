class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in matrix:
            l=0
            r=len(matrix[0])-1
            while(l<=r):
                mid=l+(r-l)//2
                if i[mid]==target:
                    return True
                elif i[mid]<target:
                    l+=1
                else:
                    r-=1
        return False
        