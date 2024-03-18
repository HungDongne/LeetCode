#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int maximumScore(vector<int>& nums, int k) {
        int const size = nums.size();
        int left = k, right = k;
        vector<int> minLeft(size + 1), minRight(size + 1);
        minLeft[k] = nums[k];
        minRight[k] = nums[k];
        for (auto i = k - 1; i >= 0; --i) {
            minLeft[i] = min(minLeft[i + 1], nums[i]);
        }
        for (auto i = k + 1; i < size; ++i) {
            minRight[i] = min(minRight[i - 1], nums[i]);
        }
        int res = -1;
        while (left >= 0 && right < size) {
            res = max(res, min(minLeft[left], minRight[right]) * (right - left + 1));
            if (left == 0) {
                ++right;
            } else if (right == size - 1) {
                --left;
            } else if (minLeft[left - 1] > minRight[right + 1]) {
                --left;
            } else {
                ++right;
            }
        }
        return res;
    }
};