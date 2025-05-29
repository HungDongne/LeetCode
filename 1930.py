class Solution(object):
    def checkPalindromic(self, word):
        l = 0
        r = len(word) - 1
        while (l < r):
            if (word[l] == word[r]):
                l += 1
                r -= 1
            else:
                return False
        return True
    
    chars = "abcdefghijklmnopqrstuvwxyz"

    def countPalindromicSubsequence(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = 0
        for char in self.chars:
            l = 0
            r = len(s) - 1
            while (l < r and s[l] != char):
                l += 1
            while (l < r and s[r] != char):
                r -= 1
            if (r - l == 0):
                res += 0
            elif (r - l == 1):
                res += 0
            else:
                unique = set([s[i] for i in range(l + 1, r)])
                res += len(unique)
                print(char, l, r)
        return res