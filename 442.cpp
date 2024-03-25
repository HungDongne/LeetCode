#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> cnt(100001, 0);
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            ++cnt[nums[i]];
            if (cnt[nums[i]] == 2) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};