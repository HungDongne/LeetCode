class Solution(object):
    def findLucky(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        res = -1
        dicts = defaultdict(int)
        for num in arr:
            dicts[num] += 1
        for index, value in dicts.items():
            if index == value and res < index:
                res = index
        return res