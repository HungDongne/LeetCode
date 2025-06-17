class Solution(object):
    def clearDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        index = 0
        res = ""
        for i in s:
            if (i.isdigit()):
                res = res[:-1]
            else:
                res += i
        return res