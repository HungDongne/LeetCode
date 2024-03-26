#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int firstMissingPositive(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 1;
        }
        int res = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                if (nums[i] == res) {
                    res++;
                } else if (nums[i] > res) {
                    return res;
                }
            }
        }
        return res;
    }
};