class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        s = "1"
        for i in range(n - 1):
            count = 0
            new_s = ""
            last_c = s[0]
            for c in s:
                if last_c == c:
                    count += 1
                else:
                    new_s += str(count) + last_c
                    count = 1
                    last_c = c
            new_s += str(count) + last_c
            s = new_s
            # print(s)
        return s
