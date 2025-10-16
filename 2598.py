from typing import List


class Solution:
    def findSmallestInteger(self, nums: List[int], value: int) -> int:
        n = len(nums)
        mod = [0] * value
        for num in nums:
            num %= value
            if num < 0:
                num += value
            mod[num] += 1
        for idx in range(n):
            j = idx % value
            mod[j] -= 1
            if mod[j] < 0:
                return idx
        return n
