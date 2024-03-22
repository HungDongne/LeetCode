#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    string smallestSubsequence(string s)
    {
        vector<int> cnt(26, 0);
        vector<bool> visited(26, false);
        for (auto c : s)
        {
            ++cnt[c - 'a'];
        }
        string res = "0";
        for (auto c : s)
        {
            --cnt[c - 'a'];
            if (visited[c - 'a'])
            {
                continue;
            }
            while (c < res.back() && cnt[res.back() - 'a'] > 0)
            {
                visited[res.back() - 'a'] = false;
                res.pop_back();
            }
            res += c;
            visited[c - 'a'] = true;
        }
        res.erase(res.begin());
        return res;
    }
};
