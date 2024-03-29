#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("O3", "unroll-loops")
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int maxValue = *max_element(nums.begin(), nums.end());
        int left = 0, right = 0, n = nums.size();
        unordered_map<int, int> m;
        long long res = 0;
        while (right < n)
        {
            ++m[nums[right]];
            while (m[maxValue] >= k)
            {
                res += n - right;
                --m[nums[left]];
                ++left;
            }
            ++right;
        }
        return res;
    }
};