class Solution(object):
    def coloredCells(self, n):
        """
        :type n: int
        :rtype: int
        """
        first = 1
        last = 2 * (n - 2) + 1
        s = (last + first) * ((last - first) / 2 + 1)
        return s + (2 * (n - 1) + 1)