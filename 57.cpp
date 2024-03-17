#include <bits/stdc++.h>

using namespace std;
bool compare(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0];
}
class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> res;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), compare);
        int left = intervals[0][0], right = intervals[0][1];
        intervals.push_back({INT_MAX, INT_MAX});
        for (auto i = 1; i < intervals.size(); i++)
        {
            if (right >= intervals[i][0])
            {
                right = max(right, intervals[i][1]);
            }
            else
            {
                res.push_back({left, right});
                left = intervals[i][0];
                right = intervals[i][1];
            }
        }
        return res;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {6, 9}};
    vector<int> newInterval = {2, 5};
    Solution solution;
    solution.insert(intervals, newInterval);
    return 0;
}