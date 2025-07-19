class Solution {
public:
    int search(vector<int>& nums, int target) {
      
        int j=nums.size();
    
        return search_recursive(nums,0,j-1,target);
    }

   int search_recursive(vector<int>& nums, int start, int end, const int target) {
    if (start > end) return -1;

    int mid = (start + end) / 2;

    if (nums[mid] == target)
        return mid;

   
    if (nums[start] <= nums[mid]) {
        if (nums[start] <= target && target < nums[mid]) {
            return search_recursive(nums, start, mid - 1, target);
        } else {
            return search_recursive(nums, mid + 1, end, target);
        }
    }
   
    else {
        if (nums[mid] < target && target <= nums[end]) {
            return search_recursive(nums, mid + 1, end, target);
        } else {
            return search_recursive(nums, start, mid - 1, target);
        }
    }
}

};