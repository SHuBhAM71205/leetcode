#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
    int n = nums.size();
    int closestSum = nums[0] + nums[1] + nums[2]; // Initial assumption

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currSum = nums[i] + nums[left] + nums[right];

            if (abs(currSum - target) < abs(closestSum - target)) {
                closestSum = currSum;
            }

            if (currSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return closestSum;
    }
};
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int curr_folder=0;
        stack<int> trace;
        
        for(auto cmd : logs)
        {
            if(cmd=="../")
            {
                if(trace.empty())
                {
                    continue;
                }
                trace.pop();
                curr_folder--;
            }
            else if(cmd=="./")
            {
                continue;
            }
            else
            {
                trace.push(curr_folder);
                curr_folder++;
            }
           
        }
        return curr_folder;
    }
};

int main(){
    return 0;
}