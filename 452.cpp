#include <bits/stdc++.h>

using namespace std;
bool compare(vector<int> &a, vector<int> &b) {
    return a[0] < b[0];

}
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) return 0;
        sort(points.begin(), points.end(), compare);
        int count = 1;
        int end = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > end) {
                count++;
                end = points[i][1];
            } else {
                end = min(end, points[i][1]);
            }
        }
        return count;
    }
};