#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9, vector<bool>(9, false));
        vector<vector<bool>> col(9, vector<bool>(9, false));
        vector<vector<bool>> box(9, vector<bool>(9, false));
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int k = i / 3 * 3 + j / 3;
                    row[i][num] = col[j][num] = box[k][num] = true;
                }
            }
        }
        function<bool(int, int)> dfs = [&](int i, int j) -> bool {
            if (i == 9) return true;
            if (j == 9) return dfs(i + 1, 0);
            if (board[i][j] != '.') return dfs(i, j + 1);
            int k = i / 3 * 3 + j / 3;
            for (int num = 0; num < 9; ++num) {
                if (!row[i][num] && !col[j][num] && !box[k][num]) {
                    row[i][num] = col[j][num] = box[k][num] = true;
                    board[i][j] = num + '1';
                    if (dfs(i, j + 1)) return true;
                    row[i][num] = col[j][num] = box[k][num] = false;
                    board[i][j] = '.';
                }
            }
            return false;
        };
        dfs(0, 0);
    }
};