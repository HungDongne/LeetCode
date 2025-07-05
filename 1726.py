class Solution(object):
    def tupleSameProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # BEAT 69.37% USERS PYTHON
        # products = defaultdict(int)
        # n = len(nums)
        # for i in range(n - 1):
        #     for j in range(i + 1, n):
        #         products[nums[i] * nums[j]] += 1
        # res = 0
        # for product in products.values():
        #     res += (product * (product - 1)) * 4
        # return res
        
        # BEAT 100% USERS PYTHON
        products = {}
        res = 0
        n = len(nums)
        for i in range(n - 1):
            for j in range(i + 1, n):
                product = nums[i] * nums[j]
                if product in products:
                    res += products[product] * 8
                    products[product] += 1
                else:
                    products[product] = 1
        return res