from collections import defaultdict

class Solution(object):
    def possibleBipartition(self, n, dislikes):
        """
        :type n: int
        :type dislikes: List[List[int]]
        :rtype: bool
        """
        graph = defaultdict(list)
        for u, v in dislikes:
            graph[u].append(v)
            graph[v].append(u)

        color = [0] * (n + 1)

        def dfs(node, c):
            color[node] = c
            for neighbor in graph[node]:
                if color[neighbor] == 0:
                    if not dfs(neighbor, -c):
                        return False
                elif color[neighbor] == c:
                    return False
            return True

        for i in range(1, n + 1):
            if color[i] == 0:
                if not dfs(i, 1):
                    return False
        return True