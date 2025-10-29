class Solution:
    def smallestNumber(self, n: int) -> int:
        ans = 1
        while ans < n:
            ans = ans * 2 + 1
        return ans
