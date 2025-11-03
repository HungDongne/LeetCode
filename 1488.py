from bisect import bisect_right


class Solution:
    def avoidFlood(self, rains):
        n = len(rains)
        ans = [1] * n
        last = {}
        sunny = []

        for i, x in enumerate(rains):
            if x > 0:
                ans[i] = -1
                if x in last:
                    j = last[x]
                    idx = bisect_right(sunny, j)
                    if idx == len(sunny):
                        return []
                    k = sunny.pop(idx)
                    ans[k] = x
                last[x] = i
            else:
                sunny.insert(bisect_right(sunny, i), i)
        return ans
