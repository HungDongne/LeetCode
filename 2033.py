class Solution(object):
    def minOperations(self, grid, x):
        """
        :type grid: List[List[int]]
        :type x: int
        :rtype: int
        """
        arr = [num for l in grid for num in l]
        arr.sort()
        for i in range(1, len(arr)):
            if (arr[i] - arr[i - 1]) % x != 0:
                return -1
        median = arr[len(arr) // 2]
        res = sum(abs(median - i) // x for i in arr)
        return res