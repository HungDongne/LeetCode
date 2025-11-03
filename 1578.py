from typing import List


class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        prv = colors[0]
        prv_time = neededTime[0]
        ans = 0
        for idx in range(len(colors[1:])):
            # print(idx, ballon)
            if colors[idx + 1] == prv:
                # print("Hello there")
                # print(idx, ballon, prv, prv_time, neededTime[idx])
                ans += min(prv_time, neededTime[idx + 1])
                prv_time = max(prv_time, neededTime[idx + 1])
            else:
                prv = colors[idx + 1]
                prv_time = neededTime[idx + 1]
        return ans
