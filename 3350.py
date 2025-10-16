from typing import List


class Solution:
    def maxIncreasingSubarrays(self, nums: List[int]) -> int:
        n = len(nums)
        dp = [0] * n
        k = 1
        for idx in range(1, n):
            if nums[idx] > nums[idx - 1]:
                dp[idx] = dp[idx - 1] + 1
            else:
                dp[idx] = 0
            while dp[idx] >= k - 1 and dp[idx - k] >= k - 1 and idx - k >= 0:
                k += 1
        return k - 1
