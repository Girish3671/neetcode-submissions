# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        x=[]
        y=[]
        curr=l1
        while curr:
            x.append(curr.val)
            curr=curr.next
        curr2=l2
        while curr2:
            y.append(curr2.val)
            curr2=curr2.next
        a=""
        b=""
        for i in x[::-1]:
            a+=str(i)
        for i in y[::-1]:
            b+=str(i)
        out=list(str(int(a)+int(b)))
        out=out[::-1]
        head=ListNode(out[0])
        current=head
        for i in out[1:]:
            current.next=ListNode(i)
            current=current.next
        return head
        
        


        