class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        m = len(nums)
        ans=[]
        def helper(i,temp_arr = []):
            if i==m:
                ans.append(list(temp_arr))
                return
            
            helper(i+1,temp_arr)
            temp_arr.append(nums[i])
            helper(i+1,temp_arr)
            temp_arr.pop()
        helper(0,[])
        return ans