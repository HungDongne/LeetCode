class Solution(object):
    vowels = ["u", "e", "o", "a", "i"]
    def check(self, word):
        return word[0] in self.vowels and word[len(word) - 1] in self.vowels
    def vowelStrings(self, words, queries):
        """
        :type words: List[str]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        check_arr = [self.check(word) for word in words]
        arr = [0]
        res = []
        for i in check_arr:
            arr.append(arr[-1] + i)
        for x, y in queries:
            res.append(arr[y + 1] - arr[x])
        return res