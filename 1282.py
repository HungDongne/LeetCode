class Solution(object):
    def groupThePeople(self, groupSizes):
        """
        :type groupSizes: List[int]
        :rtype: List[List[int]]
        """
        n = len(groupSizes)
        groups = defaultdict(list)
        res = []
        for i in range(n):
            size = groupSizes[i]
            groups[size].append(i)
            if (len(groups[size]) % size == 0 and len(groups[size]) > 0):
                # print(groups[size], size)
                res.append(groups[size][-size:])
        return res