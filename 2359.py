class Solution(object):
    def dfs(self, edges, node):
        dis = [0] * len(edges)
        visited = [False] * len(edges)
        cumulative = 0 
        next_node = node
        while (next_node != -1 and visited[next_node] == False):
            cumulative += 1
            dis[next_node] += cumulative
            visited[next_node] = True
            next_node = edges[next_node]
        return dis

    def closestMeetingNode(self, edges, node1, node2):
        """
        :type edges: List[int]
        :type node1: int
        :type node2: int
        :rtype: int
        """
        result = -1
        min_dis = len(edges) + 1
        dis1 = self.dfs(edges, node1)
        dis2 = self.dfs(edges, node2)
        # print(dis1)
        # print(dis2)
        for i in range(len(edges)):
            if (dis1[i] > 0 and dis2[i] > 0):
                max_dis = max(dis1[i], dis2[i])
                if (max_dis < min_dis):
                    min_dis = max_dis
                    result = i
        return result
        