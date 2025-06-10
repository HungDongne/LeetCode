class Solution(object):
    def threeConsecutiveOdds(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        consecutive = 0
        for num in arr:
            if (num % 2 == 1):
                consecutive += 1
                if (consecutive == 3):
                    return True
            else:
                consecutive = 0
        return False