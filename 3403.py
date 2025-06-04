class Solution(object):
    def answerString(self, word, numFriends):
        """
        :type word: str
        :type numFriends: int
        :rtype: str
        """
        if (numFriends == 1):
            return word
        n = len(word)
        max_char = max(word)
        max_len = n - (numFriends - 1)
        res = ""
        for index in range(n):
            if (word[index] == max_char):
                res = max(word[index:index + max_len], res)
        return res