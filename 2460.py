class Solution(object):
    def applyOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        count_zero = 0
        res = []
        for i in range(len(nums) - 1):
            if (nums[i] == nums[i + 1]):
                nums[i] *= 2
                nums[i + 1] = 0
            if (nums[i] != 0):
                res.append(nums[i])
            else:
                count_zero += 1
        return res + [nums[len(nums) - 1]] + [0] * count_zero