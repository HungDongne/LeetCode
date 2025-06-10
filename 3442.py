from collections import defaultdict

class Solution(object):
    def maxDifference(self, s):
        """
        :type s: str
        :rtype: int
        """
        dicts = defaultdict(int)
        res1 = 0
        res2 = 100
        for char in s:
            dicts[char] += 1
        for value in dicts.values():
            if (value % 2 == 1):
                res1 = max(res1, value)
            else:
                res2 = min(res2, value)
        return res1 - res2