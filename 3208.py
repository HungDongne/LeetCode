class Solution(object):
    def numberOfAlternatingGroups(self, colors, k):
        """
        :type colors: List[int]
        :type k: int
        :rtype: int
        """
        n_org = len(colors)
        colors = colors + colors[:k - 1]
        colors = [colors[0]] + colors + [colors[-1]]
        n = len(colors)
        l = 1
        r = 1
        res = 0
        print(colors)
        while (r < n and l <= n_org):
            while (colors[r] != colors[r - 1] and r < n):
                r += 1
            if (r - l + 1 >= k):
                print(r - 1, l)
                res += (r - 1 - l - k + 2)
            l = r
            r += 1
        return res