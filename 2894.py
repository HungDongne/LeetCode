class Solution(object):
    def differenceOfSums(self, n, m):
        """
        :type n: int
        :type m: int
        :rtype: int
        """
        last_num = int(n / m) * m
        first_num = n if (n < m) else m
        num2 = ((last_num - first_num) / m + 1) * (last_num + first_num) / 2
        num1 = n * (n + 1) / 2 - num2
        return num1 - num2
        