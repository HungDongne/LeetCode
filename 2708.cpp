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
    long long maxStrength(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        long long positive_sum = 1, negative_sum = 1, last_negative = 1, last_positive = -1, count_negative = 0;
        bool flag = false, hasZero = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                hasZero = true;
            }
            if (nums[i] < 0)
            {
                negative_sum *= nums[i];
                last_negative = nums[i];
                count_negative++;
            }
            else if (nums[i] > 0)
            {
                flag = true;
                positive_sum *= nums[i];
                last_positive = nums[i];
            }
        }
        if (count_negative == 0 && !flag)
            return 0;
        if (count_negative % 2 == 0)
            return negative_sum * positive_sum;
        if (count_negative >= 3)
            return negative_sum / last_negative * positive_sum;
        if (flag)
            return positive_sum;
        if (hasZero)
            return 0;
        return last_negative;
    }
};