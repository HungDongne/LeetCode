class Solution(object):
    def maxAdjacentDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = abs(nums[-1] - nums[0])
        for i in range(1, len(nums)):
            res = max(res, abs(nums[i] - nums[i - 1]))
        return res