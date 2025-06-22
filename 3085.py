class Solution(object):
    def minimumDeletions(self, word, k):
        """
        :type word: str
        :type k: int
        :rtype: int
        """
        count = defaultdict(int)
        abc = [chr(c) for c in range(ord("a"), ord("z") + 1)]
        for c in word:
            count[c] += 1
        arr = []
        for c in abc:
            if (count[c] != 0):
                arr.append(count[c])
        arr.sort()
        prv = arr[0]
        res = float("inf")
        for mock in arr:
            temp = 0
            for i in range(len(arr)):
                if (arr[i] < mock):
                    temp += arr[i]
                elif (arr[i] > mock + k):
                    temp += arr[i] - mock - k
            print(mock, temp)
            res = min(res, temp)
        return res