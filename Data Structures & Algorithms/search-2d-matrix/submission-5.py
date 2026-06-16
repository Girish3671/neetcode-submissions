class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows,cols=len(matrix),len(matrix[0])-1
        top,bot=0,rows-1
        while(top<=bot):
            mid=(top+bot)//2
            if target>matrix[mid][-1]:
                top+=1
            elif target<matrix[mid][0]:
                bot-=1
            else:
                break
        if not(top<=bot):
            return False

        mid=(top+bot)//2

        l,r=0,len(matrix[0])-1
        while(l<=r):
            m=(l+r)//2
            if target<matrix[mid][m]:
                r-=1
            elif target>matrix[mid][m]:
                l+=1
            else:
                return True
        return False