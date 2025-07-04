class Solution(object):
    def twoSum(self, numbers, target):
        l, r = 0, len(numbers) - 1
        while l < r:
            currSum = numbers[l] + numbers[r]
            if currSum == target:
                return [l + 1, r + 1]
            elif currSum < target:
                l += 1
            else:
                r -= 1
        