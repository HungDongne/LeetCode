#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                cout << nums[l] << endl;
                res.push_back(nums[l] * nums[l]);
                l++;
            } else {
                cout << nums[r] << endl;
                res.push_back(nums[r] * nums[r]);
                r--;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
