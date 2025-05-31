class Solution(object):
    def countSubarrays(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        res = 0
        l = 0
        length = 0
        arr = 0
        for r in range(len(nums)):
            arr += nums[r]
            length += 1
            while (length * arr >= k):
                arr -= nums[l]
                l += 1
                length -= 1
            res += (r - l + 1)
        return res