#include <bits/stdc++.h>

using namespace std;
double distant(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
{
    vector<int> res;
    for (vector<int> &query : queries)
    {
        int sum = 0;
        int circle_x = query[0], circle_y = query[1], circle_r = query[2];
        for (vector<int> &point : points) {
            int x = point[0], y = point[1];
            double dis = distant(x, y, circle_x, circle_y);
            if (dis <= circle_r) {
                sum++;
            }
        }
        res.push_back(sum);
    }
    return res;
}