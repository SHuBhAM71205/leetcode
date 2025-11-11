class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()

        best = max(nums[0]*nums[1]*nums[2],nums[-1]*nums[-2]*nums[-3])
        candidates = [0,1,len(nums)-1,len(nums)-2,len(nums)-+3]
        extremes=[-10**5, 10**5]
        
        for i in candidates:
            for val in extremes:
                temp = nums[:]
                temp[i] = val
                temp.sort()
                prod = max(temp[-1] * temp[-2] * temp[-3],
                           temp[0] * temp[1] * temp[-1])
                best = max(best, prod)
        
        return best
        