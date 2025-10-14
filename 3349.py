from typing import List


class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        # nums = [nums[0]] + nums
        n = len(nums)
        dp = n * [0]
        dp[0] = 0
        # count = 0
        # if (dp[0] + 1) % k == 0:
        #     count += 1
        for idx in range(1, n):
            # print(idx)
            if nums[idx] > nums[idx - 1]:
                dp[idx] = dp[idx - 1] + 1
            else:
                dp[idx] = 0
            if dp[idx] >= k - 1 and dp[idx - k] >= k - 1:
                return True
        # print(dp)
        # print(count)
        return False
