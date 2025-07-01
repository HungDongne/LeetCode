class Solution(object):
    def minDominoRotations(self, tops, bottoms):
        """
        :type tops: List[int]
        :type bottoms: List[int]
        :rtype: int
        """
        n = len(tops)
        def check(domino):
            count_top = 0
            count_bot = 0
            for i in range(n):
                if tops[i] != domino and bottoms[i] != domino:
                    return -1
                if tops[i] == domino:
                    count_top += 1
                if bottoms[i] == domino:
                    count_bot += 1
            return min(n - count_bot, n - count_top)
        res = check(tops[0])
        if res != -1 or tops[0] == bottoms[0]:
            return res
        return check(bottoms[0]) 