#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    string customSortString(string order, string s)
    {
        bool checked[202] = {false};
        string res = "";
        for (auto &character : order)
        {
            for (auto i = 0; i < s.length(); i++)
            {
                if (s[i] == character)
                {
                    res += character;
                    checked[i] = true;
                }
            }
        }
        for (auto i = 0; i < s.length(); i++)
        {
            if (!checked[i])
            {
                res += s[i];
            }
        }
        return res;
    }
};