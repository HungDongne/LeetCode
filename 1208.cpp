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
        int res = 0, left = 0, right = 0;
        while (right < s.length()) {
            maxCost -= abs(s[right] - t[right]);
            right++;
            if (maxCost < 0) {
                while (maxCost < 0) {
                    maxCost += abs(s[left] - t[left]);
                    left++;
                }
            }
            res = max(res, right - left);
        }
        return res;
    }
};