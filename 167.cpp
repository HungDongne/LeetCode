#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> m;
        for (auto i = 0; i < numbers.size(); i++) {
            if (m[target - numbers[i]] != 0) {
                return vector<int>({min(m[target - numbers[i]], i + 1), max(m[target - numbers[i]], i + 1)});
            }
            m[numbers[i]] = i + 1; 
        }
        return vector<int>({0, 0});
    }
};