from collections import deque


class Solution:
    def findLexSmallestString(self, s: str, a: int, b: int) -> str:
        n = len(s)

        def operate_a(s):
            s = list(s)
            for i in range(1, n, 2):
                s[i] = str((int(s[i]) + a) % 10)
            return "".join(s)

        def operate_b(s):
            return s[-b:] + s[:-b]

        q = deque()
        q.append(s)
        visited = {s}
        ans = s
        while q:
            current = q.popleft()

            if current < ans:
                ans = current

            tmp_a = operate_a(current)
            tmp_b = operate_b(current)

            if tmp_a not in visited:
                visited.add(tmp_a)
                q.append(tmp_a)
            if tmp_b not in visited:
                visited.add(tmp_b)
                q.append(tmp_b)

        return ans


if __name__ == "__main__":
    s = Solution()
    print(s.findLexSmallestString("5525", 9, 2))
    print(
        s.findLexSmallestString(
            "1627837459392748390207372189293948575674834892392020329838475466155235634674575893932984756393947858",
            9,
            99,
        )
    )
