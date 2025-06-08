from collections import defaultdict

class Solution(object):
    countChar = defaultdict(int)
    chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    res = 0
    def dfs(self):
        for char in self.chars:
            if (self.countChar[char] > 0):
                self.countChar[char] -= 1
                self.res += 1
                self.dfs()
                self.countChar[char] += 1
    def numTilePossibilities(self, tiles):
        """
        :type tiles: str
        :rtype: int
        """
        self.countChar = defaultdict(int)
        for char in tiles:
            self.countChar[char] += 1
        self.dfs()
        return self.res
        