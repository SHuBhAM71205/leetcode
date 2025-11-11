#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        fast_ptr = head
        slow_ptr = head

        while fast_ptr.next is not None and fast_ptr.next.next is not None:
            slow_ptr = slow_ptr.next
            fast_ptr = fast_ptr.next.next
        

        return slow_ptr if fast_ptr.next is None else slow_ptr.next