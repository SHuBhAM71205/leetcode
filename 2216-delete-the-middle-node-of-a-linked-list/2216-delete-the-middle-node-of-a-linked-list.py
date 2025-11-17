# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return None
        prev = None
        first = head
        second = head
        while second is not None and second.next is not None:
            prev = first
            first = first.next
            second = second.next.next
        
        if prev is None:
            prev = first
        
        prev.next = first.next

        return head

