#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if (k == 0) return 0;
        int res = 0, products = 1, left = 0, right = 0, size = nums.size();
        cout << endl;
        while (right < size) {
            products *= nums[right++];
            while (products >= k && left < right) {
                products /= nums[left++];
            }
            res += right - left;
        }
        return res;
    }
};