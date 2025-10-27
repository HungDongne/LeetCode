class Solution:
    def minimumSteps(self, s: str) -> int:
        n = len(s)
        right, last_point = n - 1, n - 1
        s_list = list(s)
        ans = 0
        while last_point >= 0 and s_list[last_point] == "1":
            last_point -= 1
        right = last_point - 1
        while right >= 0:
            if s_list[right] == "0":
                right -= 1
            else:
                # print(right, last_point)
                ans += last_point - right
                s_list[right] = "0"
                s_list[last_point] = "1"
                while last_point >= 0 and s_list[last_point] == "1":
                    last_point -= 1
                right -= 1
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.minimumSteps("1100101"))
    print(solution.minimumSteps("001011"))
