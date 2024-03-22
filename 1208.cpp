#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> costs(s.length());
        for (int i = 0; i < s.length(); ++i) {
            costs[i] = abs(s[i] - t[i]);
        }
        int res = 0, left = 0, right = 0;
        while (right < s.length()) {
            maxCost -= costs[right++];
            if (maxCost < 0) {
                while (maxCost < 0) {
                    maxCost += costs[left++];
                }
            }
            res = max(res, right - left);
        }
        return res;
    }
};