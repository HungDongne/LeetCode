class Solution(object):
    def partitionArray(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        nums.sort()
        minn = nums[0]
        res = 0
        for num in nums:
            if (abs(num - minn) > k):
                res += 1
                minn = num
        return res + 1