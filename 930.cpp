#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        vector<int> sum(n + 1);
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }
        unordered_map<int, int> cnt;
        int ret = 0;
        for (int x : sum) {
            ret += cnt[x];
            cnt[x + goal]++;
        }
        return ret;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << solution.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}