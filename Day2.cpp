// merge two sorted list

#include<iostream>
#include<vector>
#include<string>

using namespace std;

typedef struct ListNode
{
    int val;
    ListNode * next=nullptr;

    ListNode(int val2=0,ListNode *next2=nullptr){
        val=val2;
        next=next2;
    }

}ListNode;


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1 != nullptr) tail->next = list1;
        if (list2 != nullptr) tail->next = list2;

        return dummy->next;
    }
};

// this is the zig zac one pattern question in readme .md

class Solution2 {
public:

    string convert(string s, int numRows) {

        vector <string> rows(min(numRows,(int)s.size()));
        int currRow=0;
        bool gowingDown=true;
        for(auto c: s)
        {
            rows[currRow]+=c;
            if(currRow==0)
            {
                gowingDown=true;
            }
            else if(currRow == numRows-1)
            {
                gowingDown=false;
            }

            currRow+= gowingDown ? 1 : -1;
        }

        string ans;

        for(auto row :rows)
        {
            ans+=row;
        }

        return ans;

    }
};


int main(){
    return 0;
}