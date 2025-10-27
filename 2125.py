from typing import List


class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        ans = 0
        previous = bank[0].count("1")
        for layer in bank[1:]:
            s = layer.count("1")
            if s != 0:
                ans += previous * s
                previous = s
        return ans
