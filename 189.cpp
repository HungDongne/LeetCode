#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp;
        for (int i = nums.size() - k; i < nums.size(); i++) {
            temp.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size() - k; i++) {
            temp.push_back(nums[i]);
        }
        nums = temp;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}