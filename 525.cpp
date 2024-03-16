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
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i] ? 1 : -1;
            if (mp.count(sum))
            {
                maxLen = max(maxLen, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};