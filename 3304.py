class Solution(object):
    def kthCharacter(self, k):
        """
        :type k: int
        :rtype: str
        """
        word = ["a"]
        while (len(word) < k):
            n = len(word)
            for i in range(n):
                temp = chr((ord(word[i]) - ord("a") + 1) % 26 + ord("a"))
                word.append(temp)
        return word[k - 1]