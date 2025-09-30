from typing import List


class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n - 1):
            new_arr = []
            for j in range(n - i - 1):
                new_arr.append((nums[j] + nums[j + 1]))
            # print(new_arr)
            nums = new_arr
        return nums[0] % 10
