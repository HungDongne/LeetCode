class Solution(object):
    def maxFreqSum(self, s):
        """
        :type s: str
        :rtype: int
        """
        count_v = {0: 0}
        count_c = {0: 0}
        vowels = ("a", "e", "i", "o", "u")
        for c in s:
            if c in vowels:
                count_v[c] = count_v.get(c, 0) + 1
            else:
                count_c[c] = count_c.get(c, 0) + 1
        return max(count_c.values()) + max(count_v.values())
