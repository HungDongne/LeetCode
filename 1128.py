class Solution(object):
    def numEquivDominoPairs(self, dominoes):
        """
        :type dominoes: List[List[int]]
        :rtype: int
        """
        count = [0] * 100
        res = 0
        for a, b in dominoes:
            key = a * 10 + b if a > b else b * 10 + a
            res += count[key]
            count[key] += 1
        return res