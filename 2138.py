class Solution(object):
    def divideString(self, s, k, fill):
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        res = []
        n = len(s)
        if (n % k != 0):
            for i in range(n % k, k):
                s += fill
        n = len(s)
        for i in range(0, n, k):
            res.append(s[i:i+k])
        return res