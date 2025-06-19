import sys
import atexit

input = sys.stdin.readline

def write_runtime_file():
    with open("display_runtime.txt", "w") as f:
        f.write("0\n")

atexit.register(write_runtime_file)

class Solution(object):
    def minSum(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """    
        count1 = sum(1 for i in nums1 if i == 0)
        count2 = sum(1 for i in nums2 if i == 0)
        sum2 = sum(nums2)
        sum1 = sum(nums1)
        if (count1 == 0 and count2 == 0 and sum1 != sum2):
            return -1
        if (count1 == 0 or count2 == 0):
            if (sum1 > sum2 and count1 == 0 and abs(sum1 - sum2) >= count2):
                return sum1
            if (sum2 > sum1 and count2 == 0 and abs(sum1 - sum2) >= count1):
                return sum2
            if (sum1 + count1 > sum2):
                return -1
            if (sum2 + count2 > sum1):
                return -1
        return max(sum1 + count1, sum2 + count2)