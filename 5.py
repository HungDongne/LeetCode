class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        if (len(s) == 1):
            return s
        s = "!" + s + "@"
        result = s[1]
        max_len = 1
        l = 0
        r = len(s) - 1
        for center, char in enumerate(s):
            if (center >= 1 and center <= len(s) - 2):
                l = center - 1
                r = center + 1
                while (s[l] == s[r] and l >= 0 and r <= len(s) - 1):
                    l -= 1
                    r += 1
                r -= 1
                l += 1
                if (max_len < (r - l + 1)):
                    result = ""
                    result = s[l:r+1]
                    max_len = r - l + 1
        for center, char in enumerate(s):
            if (center >= 1 and center <= len(s) - 1):
                if (s[center] == s[center - 1]):
                    l = center - 1
                    r = center
                    while (s[l] == s[r] and l >= 0 and r <= len(s) - 1):
                        l -= 1
                        r += 1
                    l += 1
                    r -= 1
                    if (max_len < (r - l + 1)):
                        result = s[l:r+1]
                        max_len = r - l + 1
        return result