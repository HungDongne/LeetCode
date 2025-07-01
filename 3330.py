class Solution(object):
    def possibleStringCount(self, word):
        """
        :type word: str
        :rtype: int
        """
        res = 1
        count = 0
        word += " "
        for i in range(1, len(word)):
            if (word[i] == word[i - 1]):
                count += 1
            else:
                res += count
                count = 0
        return res