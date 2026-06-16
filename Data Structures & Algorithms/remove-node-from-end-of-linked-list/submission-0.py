# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        nodes=[]
        curr=head
        while curr:
            nodes.append(curr)
            curr=curr.next
        
        removal_node=len(nodes)-n
        if removal_node==0:
            return head.next
        nodes[removal_node-1].next=nodes[removal_node].next
        return head