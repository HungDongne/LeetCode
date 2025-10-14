from collections import defaultdict
from typing import List


class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        def areAnagrams(word1, word2) -> bool:
            if len(word1) != len(word2):
                return False
            dicts = defaultdict(int)
            for ch in word1:
                dicts[ch] += 1
            for ch in word2:
                if ch not in dicts:
                    return False
                else:
                    dicts[ch] -= 1
                    if dicts[ch] < 0:
                        return False
            return True

        res = []
        words = [" "] + words + [" "]
        for idx in range(1, len(words) - 1):
            if not (areAnagrams(words[idx], words[idx - 1])):
                res.append(words[idx])
        return res


if __name__ == "__main__":
    s = Solution()
    print(s.removeAnagrams(["abba", "baba", "bbaa", "cd", "cd"]))
    print(s.removeAnagrams(["a", "b", "c", "d", "e"]))
