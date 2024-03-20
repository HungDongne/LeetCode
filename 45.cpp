#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), INT_MAX);
        dp[0] = 0;
        for (int i = 1; i < nums.size(); ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (nums[j] + j >= i) {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
        return dp[nums.size() - 1];
    }
};