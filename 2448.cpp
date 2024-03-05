#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution () {
        ios::sync_with_stdio(0);
        cin.tie(0);
    }
    long long findMedian(vector<int> nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() % 2 == 0) {
            return 0.5 * (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]);
        } else {
            return nums[nums.size() / 2];
        }
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long res = LONG_LONG_MAX;
        long long median = findMedian(nums);
        for (int i = -100000; i <= 100000; i++) {
            long long sum = 0;
            for (auto index = 0; index < nums.size(); index++) {
                sum = sum + (abs(nums[index] - (median + i)) * (cost[index]));
            }
            if (sum < res) {
                res = sum;
                //cout << median + i << " " << sum << endl;
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {735103,366367,132236,133334,808160,113001,49051,735598,686615,665317,999793,426087,587000,649989,509946,743518};
    vector<int> cost = {724182,447415,723725,902336,600863,287644,13836,665183,448859,917248,397790,898215,790754,320604,468575,825614};
    std::cout << Solution().minCost(nums, cost) << std::endl;
    return 0;
}
