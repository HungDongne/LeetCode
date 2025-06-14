class Solution(object):
    def minMaxDifference(self, num):
        """
        :type num: int
        :rtype: int
        """
        num_str = str(num)
        for digit in num_str:
            if digit != '9':
                max_str = num_str.replace(digit, '9')
                break
            else:
                max_str = num_str

        for digit in num_str:
            if digit != '0':
                min_str = num_str.replace(digit, '0')
                break
            else:
                min_str = num_str
        return int(max_str) - int(min_str)
