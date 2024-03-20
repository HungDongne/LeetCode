#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int maxArea(vector<int>& height) {
        int res = -1, left = 0, right = height.size() - 1;
        while (left <= right) {
            res = max(res, (right - left) * min(height[left], height[right]));
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return res;
    }
};