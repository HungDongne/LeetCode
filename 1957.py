class Solution:
    def makeFancyString(self, s: str) -> str:
        last_char = ""
        res = ""
        count = 0
        for c in s:
            if last_char != c:
                count = 1
                last_char = c
                res += c
            else:
                count += 1
                if count < 3:
                    res += c
        return res
