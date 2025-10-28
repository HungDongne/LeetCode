from typing import List


class Solution:
    def countValidSelections(self, nums: List[int]) -> int:
        n = len(nums)

        def trial(nums, idx, dx):
            idx += dx
            while 0 <= idx < n:
                if nums[idx] != 0:
                    nums[idx] -= 1
                    dx = -dx
                idx += dx
            for num in nums:
                if num != 0:
                    return False
            return True

        count = 0
        for idx in range(n):
            if nums[idx] == 0:
                count += trial(nums[:], idx, 1)
                count += trial(nums[:], idx, -1)
        return count
