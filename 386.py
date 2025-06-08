class Solution(object):
    res = []
    def dfs(self, sum_current, n):
        for i in range(10):
            tmp = sum_current * 10 + i
            if (tmp <= n and tmp > 0):
                self.res.append(tmp)
                self.dfs(tmp, n)
    def lexicalOrder(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        self.res = []
        self.dfs(0, n)
        return self.res
        