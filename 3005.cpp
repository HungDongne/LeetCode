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
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int maxCount = -1, count = 0;
        for (auto i : nums)
        {
            m[i]++;
            maxCount = max(maxCount, m[i]);
        }
        for (auto pair : m)
        {
            if (pair.second == maxCount)
            {
                count += pair.second;
            }
        }
        return count;
    }
};