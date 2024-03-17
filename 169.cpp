#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int majorityElement(vector<int>& nums) {
        map<int, int> cnt;
        int maxCount = -1, res = -1;
        for (auto& num : nums) {
            ++cnt[num];
            if (cnt[num] > maxCount) {
                maxCount = cnt[num];
                res = num;
            }
        }
        return res;
    }
};