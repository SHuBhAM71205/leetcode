class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow_ptr = head
        fast_ptr = head
        i=0
        while fast_ptr != None:
            if i!=0 and fast_ptr == slow_ptr:
                return True
            
            if fast_ptr.next is not None:
                fast_ptr = fast_ptr.next.next
            else:
                break
            
            slow_ptr = slow_ptr.next
            i+=1
        return False