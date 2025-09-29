from typing import List


class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        res = count = 0
        for num in nums:
            count = count + 1 if num == 0 else 0
            res += count
        return res
