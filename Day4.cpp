class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);  
    dummy->next = head;

    ListNode* frontNode = dummy;
    ListNode* backNode = dummy;

   
    for (int i = 0; i <= n; i++) {
        frontNode = frontNode->next;
    }

    
    while (frontNode != nullptr) {
        frontNode = frontNode->next;
        backNode = backNode->next;
    }

   
    ListNode* temp = backNode->next;
    backNode->next = backNode->next->next;
    delete temp;  

    return dummy->next;
}

};