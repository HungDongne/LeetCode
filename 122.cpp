#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = prices.size(), dp[n][2];
        if (n == 0) return 0;
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        for (int i = 1; i < n; ++i) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
        }
        return dp[n - 1][0];
    }
};