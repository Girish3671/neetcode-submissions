# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        l1=[]
        curr=head
        while curr:
            l1.append(curr)
            curr=curr.next
        i,j=0,len(l1)-1
        while i<j:
            l1[i].next=l1[j]
            i+=1
            if i>=j:
                break
            l1[j].next=l1[i]
            j-=1

        l1[i].next=None

        