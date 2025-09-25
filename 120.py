from typing import List


class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        height = len(triangle)
        dp = [10001] * height
        dp[0] = triangle[0][0]
        for nums in triangle[1:]:
            n = len(nums)
            temp_dp = dp[:]
            for i in range(n):
                dp[i] = temp_dp[i] + nums[i]
                if 0 <= i - 1 <= n - 1:
                    dp[i] = min(temp_dp[i - 1] + nums[i], dp[i])
                # if 0 <= i + 1 <= n - 1:
                #     dp[i] = min(temp_dp[i + 1] + nums[i], dp[i])
            # print(dp)

        return min(dp)
