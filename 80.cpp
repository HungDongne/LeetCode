#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int removeDuplicates(vector<int>& nums) {
        int prev = INT_MAX, cnt = 0;
        for (int i = nums.size() - 1; i >= 0; --i){
            if (nums[i] == prev){
                cnt++;
                if (cnt > 1){
                    nums.erase(nums.begin() + i);
                }
            } else {
                prev = nums[i];
                cnt = 0;
            }
        }
        return nums.size();
    }
};