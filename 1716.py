class Solution:
    def totalMoney(self, n: int) -> int:
        a = n // 7
        b = n % 7
        return a * 28 + 7 * (a - 1) * a // 2 + (a + 1 + a + b) * b // 2
