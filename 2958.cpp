#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int left = 0, right = 0, res = 0;
        unordered_map<int, int> cnt;
        while (right < nums.size()) {
            ++cnt[nums[right]];
            while (cnt[nums[right]] > k) {
                --cnt[nums[left]];
                ++left;
            }
            res = max(res, right - left + 1);
            ++right;
        }
        return res;
    }
};