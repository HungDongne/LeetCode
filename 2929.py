class Solution(object):
    def distributeCandies(self, n, limit):
        """
        :type n: int
        :type limit: int
        :rtype: int
        """
        res = 0
        for x in range(min(n, limit) + 1):
            remain = n - x
            # print(x, remain)
            if (remain <= 2 * limit):
                if (remain <= limit):
                    res += remain + 1
                else:
                    # first = remain - limit
                    # second = limit
                    res += (2* limit - remain + 1)
        return res