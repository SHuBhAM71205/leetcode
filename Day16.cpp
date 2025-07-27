class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySerch(nums,target,0,nums.size()-1);
    }
    int binarySerch(vector<int> & nums ,int target,int start , int end)
    {
        if(start > end) return start;

        int mid = start+(end-start)/2;
        
        if(nums[mid]==target) return mid; 
        else if(nums[mid]>target)
        {
            return binarySerch(nums,target,start,mid-1);
        }
        else 
        {
            return binarySerch(nums,target,mid+1,end);
        }
    }
};