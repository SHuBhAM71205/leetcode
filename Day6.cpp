#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct TreeNode
{
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(TreeNode*l=nullptr , TreeNode*r=nullptr ,int data = 0){
        this->data = data;
    }


} TreeNode;



class Solution {
    TreeNode* recursionconstruct(vector<int>& nums, int start_idx, int end_idx) {
        if (start_idx > end_idx) {
            return nullptr;
        }

        auto max_itr = max_element(nums.begin() + start_idx, nums.begin() + end_idx + 1);
        int max_index = max_itr - nums.begin();  
        TreeNode* node = new TreeNode(nullptr,nullptr,(int)*max_itr);

       
        node->left = recursionconstruct(nums, start_idx, max_index - 1);
        node->right = recursionconstruct(nums, max_index + 1, end_idx);

        return node;
    }

public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return recursionconstruct(nums, 0, nums.size() - 1);
    }
};


int main()
{
    return 0;
}