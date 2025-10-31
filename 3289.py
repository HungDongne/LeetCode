from typing import List


class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        visited = set()
        for num in nums:
            if num not in visited:
                visited.add(num)
            else:
                ans.append(num)
        return ans
