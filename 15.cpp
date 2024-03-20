#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for (int i = 0; i < nums.size() - 2; ++i)
        {

            int k = nums.size() - 1, j = i + 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    res.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};