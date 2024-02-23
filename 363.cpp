#include <bits/stdc++.h>

using namespace std;
void addBorder(vector<vector<int>> &maxtrix) {
    int n = maxtrix.size();
    int m = maxtrix[0].size();
    for (int i = 0; i < n; i++) {
        maxtrix[i].insert(maxtrix[i].begin(), 0);
    }
    vector<int> tmpVec;
    for (int i = 0; i <= m; i++) {
        tmpVec.push_back(0);
    }
    maxtrix.insert(maxtrix.begin(), tmpVec);
    // for (auto i : maxtrix) {
    //     for (auto j : i) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
}
int calculateArea(int (*prefix)[105], int x1, int y1, int x2, int y2)
{
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}
int maxSumSubmatrix(vector<vector<int>> &matrix, int k)
{
    addBorder(matrix);
    int prefixSum[105][105];
    int n = matrix.size();
    int m = matrix[0].size();
    // cout << n << " " << m << endl;
    for (int i = 0; i < m; i++) {
        prefixSum[0][i] = matrix[0][i];
    }
    for (int i = 0; i < n; i++) {
        prefixSum[i][0] = matrix[i][0];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            prefixSum[i][j] = prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1] + matrix[i][j];
        }
    }
    int res = -1e6;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            for (int x = 1; x <= i; x++) {
                for (int y = 1; y <= j; y++) {
                    // cout << x << " " << y << " " << i << " " << j << endl;
                    int area = calculateArea(prefixSum, x, y, i, j);
                    if (area <= k) {
                        res = max(res, area);
                    }
                }
            }
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> matrix = {{2,2,-1}};
    cout << maxSumSubmatrix(matrix, 3);
    return 0;
}