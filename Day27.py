class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ans = None
        if head == None:
            return None
        
        def helper(head: Optional[ListNode]):
            nonlocal ans
            if head.next == None:
                ans = head
                return head

            sorted_list = helper(head.next)

            sorted_list.next = head

            head.next = None

            return head
        
        helper(head)

        return ans