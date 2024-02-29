#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    string reverseWords(string s)
    {
        int j = 0;
        while (s[0] == ' ')
        {
            s.erase(0, 1);
        }
        while (s[s.size() - 1] == ' ')
        {
            s.erase(s.size() - 1, 1);
        }
        while (j < s.length())
        {
            while (s[j] == ' ' && s[j + 1] == ' ')
            {
                s.erase(j + 1, 1);
            }
            j++;
        }
        int old = s.size() - 1;
        j = old;
        string res = "";
        while (j >= 0)
        {
            if (s[j] == ' ')
            {
                res += s.substr(j + 1, old - j) + " ";
                old = j - 1;
            }
            j--;
        }
        res += s.substr(0, old + 1);
        return res;
    }
};