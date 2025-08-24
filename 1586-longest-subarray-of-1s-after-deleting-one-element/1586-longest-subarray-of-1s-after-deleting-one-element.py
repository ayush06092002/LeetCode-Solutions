class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        left, right = 0, 0
        maxi, zeros = 0, 0

        while right < len(nums):
            if nums[right] == 0:
                zeros += 1
            
            while zeros > 1:
                if nums[left] == 0:
                    zeros -= 1
                
                left += 1
            
            maxi = max(maxi, right - left)
            right += 1
        
        return maxi