class Solution(object):
    def findKDistantIndices(self, nums, key, k):
        """
        :type nums: List[int]
        :type key: int
        :type k: int
        :rtype: List[int]
        """
        n = len(nums)
        checked = [False] * n
        l = 0
        r = 0
        for i in range(n):
            if nums[i] == key:
                if (i - k < r):
                    l = r
                    if (i + k > n - 1):
                        r = n - 1
                    else:
                        r = i + k
                else:
                    if (i - k < 0):
                        l = 0
                    else:
                        l = i - k
                    if (i + k > n - 1):
                        r = n - 1
                    else:
                        r = i + k
                for tmp in range(l, r + 1):
                    checked[tmp] = True
        res = [i for i in range(n) if checked[i]]
        return res