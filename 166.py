class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:
        if numerator == 0:
            return "0"

        result = ""

        if (numerator * denominator) < 0:
            result += "-"
        numerator = abs(numerator)
        denominator = abs(denominator)

        phan_nguyen = numerator // denominator
        result += str(phan_nguyen)
        phan_du = numerator % denominator
        if phan_du == 0:
            return result

        result += "."
        numbers = {}
        temp_str = ""

        while phan_du != 0:
            if phan_du in numbers:
                idx = numbers[phan_du]
                temp_str = temp_str[:idx] + "(" + temp_str[idx:] + ")"
                return result + temp_str

            numbers[phan_du] = len(temp_str)
            phan_du *= 10
            temp_str += str(phan_du // denominator)
            phan_du %= denominator

        return result + temp_str
