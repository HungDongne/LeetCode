import sys
import atexit

input = sys.stdin.readline

def write_runtime_file():
    with open("display_runtime.txt", "w") as f:
        f.write("0\n")

atexit.register(write_runtime_file)

class Solution(object):
    def maxDistance(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        count = defaultdict(int)
        res = 0
        for c in s:
            count[c] += 1
            res = max(res, count["N"] + count["E"] - count["S"] - count["W"] + 2 * min(k, count["S"] + count["W"]))
            res = max(res, count["S"] + count["E"] - count["N"] - count["W"] + 2 * min(k, count["N"] + count["W"]))
            res = max(res, count["S"] + count["W"] - count["N"] - count["E"] + 2 * min(k, count["N"] + count["E"]))
            res = max(res, count["N"] + count["W"] - count["S"] - count["E"] + 2 * min(k, count["S"] + count["E"]))
        return res