class Solution(object):
    def maxSubsequence(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        sorted_nums = sorted(enumerate(nums), key = lambda x : x[1])
        return [x for i, x in sorted(sorted_nums[-k:], key = lambda x : x[0])]