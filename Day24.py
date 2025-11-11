class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums=sorted(nums)
        ans = [] 

        for i in range(1,len(nums)):
            temp = nums[i] - nums[i-1]
            if(temp > 1):
                ans.extend(i for i in range(nums[i-1]+1  ,nums[i]))

        return ans