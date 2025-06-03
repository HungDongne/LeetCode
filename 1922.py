class Solution(object):
    mod = 10**9 + 7
    def cusPow(self, x, n):
        if n == 0:
            return 1
        if n == 1:
            return x
        else:
            if (n % 2 == 1):
                temp = self.cusPow(x, n // 2) % self.mod
                return (temp ** 2 * x) % self.mod
            else:
                temp = self.cusPow(x, n // 2) % self.mod
                return (temp ** 2) % self.mod
    def countGoodNumbers(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 1
        even = (n + 1) // 2
        odd = n // 2
        return int(self.cusPow(5, even) * self.cusPow(4, odd) % self.mod)