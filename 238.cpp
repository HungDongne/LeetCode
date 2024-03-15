#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int countZero = 0;
        for (auto& num : nums) {
            if (!num) {
                ++countZero;
            } else {
                product *= num;
            }
        }
        cout << product << endl;
        vector<int> res;
        for (auto& num : nums) {
            if (countZero >= 2) {
                return vector<int>(nums.size(), 0);
            } else if (countZero == 1) {
                if (num != 0) {
                    res.push_back(0);
                } else {
                    res.push_back(product);
                }
            } else {
                res.push_back(product / num);
            }
        }
        return res;
    }
};