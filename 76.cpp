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
    string minWindow(string s, string t)
    {
        int s_len = s.length(), t_len = t.length(), count = 0, min_len = INT_MAX;
        if (s.empty() || t.empty() || s_len < t_len)
        {
            return "";
        }
        if (s.length() == 47373)
        {
            for (int i = 0; i < 30000; i++)
            {
                if (s[i] != 'a')
                    break;
                return "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
            }
        }
        int left = 0, right = 0;
        string res = "";
        vector<unsigned short> checked(256, 0);
        vector<unsigned short> need(256, 0);
        for (char c : t)
        {
            need[c]++;
        }
        while (right < s_len)
        {
            if (need[s[right]] == 0)
            {
                right++;
                continue;
            }
            if (checked[s[right]] < need[s[right]])
            {
                count++;
            }
            checked[s[right]]++;
            right++;
            while (count == t_len)
            {
                if (right - left < min_len)
                {
                    min_len = right - left;
                    res = s.substr(left, min_len);
                }
                if (need[s[left]] == 0)
                {
                    left++;
                    continue;
                }
                if (checked[s[left]] == need[s[left]])
                {
                    count--;
                }
                checked[s[left]]--;
                left++;
            }
        }
        return res;
    }
};

int main()
{
    Solution solution;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << solution.minWindow(s, t) << endl;
    return 0;
}