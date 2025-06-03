class Solution(object):
    def cusPow(self, x, n):
        if (n == 0):
            return 1
        if (n < 0):
            x = 1/x
            n = -n
        if n == 1:
            return x
        else:
            if (n % 2 == 1):
                temp = self.cusPow(x, n // 2)
                return temp ** 2 * x
            else:
                temp = self.cusPow(x, n // 2)
                return temp ** 2
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        return self.cusPow(x, n)