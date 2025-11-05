from typing import List


class Solution:
    def findValueOfPartition(self, nums: List[int]) -> int:
        nums.sort()
        # print(nums)
        return min(nums[i + 1] - nums[i] for i in range(len(nums) - 1))
