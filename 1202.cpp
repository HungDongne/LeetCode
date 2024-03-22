#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
        string s_copy = s.substr();
        cout << endl;
        vector<bool> visited(s.length(), false);
        vector<vector<int>> adj(s.length());
        for (auto p : pairs)
        {
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if (!visited[i])
            {
                vector<char> tmpString;
                vector<int> tmpIndex;
                queue<int> q;
                q.push(i);
                visited[i] = true;
                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    tmpString.push_back(s[u]);
                    tmpIndex.push_back(u);
                    for (auto v : adj[u])
                    {
                        if (!visited[v])
                        {
                            q.push(v);
                            visited[v] = true;
                        }
                    }
                }
                sort(tmpString.begin(), tmpString.end());
                sort(tmpIndex.begin(), tmpIndex.end());
                int size = tmpString.size();
                for (int index = 0; index < size; ++index) {
                    s_copy[tmpIndex[index]] = tmpString[index];
                }
            }
        }
        return s_copy;
    }
};

int main()
{
    Solution s;
    string str = "dcab";
    vector<vector<int>> pairs = {{0, 3}, {1, 2}, {0, 2}};
    cout << s.smallestStringWithSwaps(str, pairs) << endl;
    return 0;
}