from typing import List

class Solution:
    def hasIncreasingSubarrays(self, nums: List[int]) -> bool:
        n = len(nums)
        
        for k in range(len(nums)):
            for a in range(n - 2 * k + 1):
                if all(nums[i] < nums[i + 1] for i in range(a, a + k - 1)):
                    b = a + k
                    if all(nums[j] < nums[j + 1] for j in range(b, b + k - 1)):
                        return True
            return False
