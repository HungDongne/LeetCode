from typing import List


class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        odd_count = 0
        even_dp = 0
        odd_dp = 0
        for num in nums:
            if num % 2:
                odd_dp = max(odd_dp, even_dp + 1)
                odd_count += 1
            else:
                even_dp = max(even_dp, odd_dp + 1)
        return max(odd_count, len(nums) - odd_count, even_dp, odd_dp)
