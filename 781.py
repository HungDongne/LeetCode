from collections import Counter
from typing import List


class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        count = Counter(answers)
        res = 0
        for k, v in count.items():
            res += (v + k) // (k + 1) * (k + 1)
        return res
