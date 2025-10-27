from typing import List


class Solution:
    def maximumSum(self, arr: List[int]) -> int:
        n = len(arr)
        no_del = arr[0]
        one_del = 0
        ans = arr[0]

        for i in range(1, n):
            one_del = max(no_del, one_del + arr[i])
            no_del = max(arr[i], no_del + arr[i])
            ans = max(ans, max(no_del, one_del))

        return ans
