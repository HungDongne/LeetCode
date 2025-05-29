class Solution(object):
    string = "abcdefghijklmnopqrstuvwxyz"
    def shiftingChar(self, char, step):
        return self.string[(ord(char) - ord('a') + step) % 26]
    def shiftingLetters(self, s, shifts):
        """
        :type s: str
        :type shifts: List[List[int]]
        :rtype: str
        """
        arr = [0] * (len(s) + 1)
        for l, r, direction in shifts:
            shift = 1 if direction == 1 else -1
            arr[l] += shift
            arr[r + 1] -= shift
        
        previous = 0
        result = ""

        for i, char in enumerate(s):
            previous += arr[i]
            result += (self.shiftingChar(char, previous))
        return result