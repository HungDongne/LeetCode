#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int SubArrayswithAtMostKDistinctElements(vector<int> &nums, int k)
    {
        int left = 0, right = 0, n = nums.size(), res = 0, cnt = 0;
        unordered_map<int, int> m;
        while (right < n)
        {
            ++m[nums[right]];
            if (m[nums[right]] == 1)
            {
                ++cnt;
            }
            while (cnt > k)
            {
                --m[nums[left]];
                if (m[nums[left]] == 0)
                {
                    --cnt;
                }
                ++left;
            }
            res += right - left + 1;
            ++right;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        return SubArrayswithAtMostKDistinctElements(nums, k) - SubArrayswithAtMostKDistinctElements(nums, k - 1);
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 1, 2, 3};
    cout << solution.subarraysWithKDistinct(nums, 2) << endl;
    return 0;
}