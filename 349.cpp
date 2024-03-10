#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        set<int> countNumber;
        for (auto& i : nums1) {
            countNumber.insert(i);
        }
        for (auto& i : nums2) {
            if (countNumber.find(i) != countNumber.end()) {
                result.push_back(i);
                countNumber.erase(i);
            }
        }
        return result;
    }
};