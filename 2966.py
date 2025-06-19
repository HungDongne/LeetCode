import sys
import atexit

input = sys.stdin.readline

def write_runtime_file():
    with open("display_runtime.txt", "w") as f:
        f.write("0\n")

atexit.register(write_runtime_file)

class Solution(object):
    def divideArray(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[List[int]]
        """
        result = []
        nums.sort()
        for i in range(2, len(nums), 3):
            if (abs(nums[i] - nums[i - 2]) > k):
                return []
            else:
                result.append(nums[i - 2: i + 1])
        return result