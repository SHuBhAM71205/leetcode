class Solution:
    def isPalindrome(self, head):
        self.left = head

        def check(right):
            if right is None:
                return True
            
            if not check(right.next):
                return False
            
            if self.left.val != right.val:
                return False
            
            self.left = self.left.next
            return True
        
        return check(head)
