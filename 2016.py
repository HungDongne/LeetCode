class Solution(object):
    def maximumDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        num_min = 10e9 + 1
        for num in nums:
            res = max(res, num - num_min)
            num_min = min(num_min, num)
        return -1 if res == 0 else res