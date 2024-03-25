#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> cloneMaxtrix = matrix;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                if (cloneMaxtrix[i][j] == 0) {
                    for (int x = 0; x < matrix.size(); ++x) {
                        matrix[x][j] = 0;
                    }
                    for (int x = 0; x < matrix[i].size(); ++x) {
                        matrix[i][x] = 0;
                    }
                }
            }
        }
    }
};