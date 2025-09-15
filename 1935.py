class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        res = 0
        for word in text.split(sep=" "):
            for c in word:
                if c in brokenLetters:
                    res -= 1
                    break
        return res + len(text.split(sep=" "))
