class Solution(object):
    def tupleSameProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        products = defaultdict(int)
        n = len(nums)
        for i in range(n - 1):
            for j in range(i + 1, n):
                products[nums[i] * nums[j]] += 1
        res = 0
        for product in products.values():
            res += (product * (product - 1)) * 4
        return res