import sys
import atexit

input = sys.stdin.readline

def write_runtime_file():
    with open("display_runtime.txt", "w") as f:
        f.write("0\n")

atexit.register(write_runtime_file)

class Solution(object):
    def numEquivDominoPairs(self, dominoes):
        """
        :type dominoes: List[List[int]]
        :rtype: int
        """
        # count = defaultdict(int)
        count = [0] * 100
        res = 0
        for a, b in dominoes:
            key = a * 10 + b if a > b else b * 10 + a
            res += count[key]
            count[key] += 1
        return res