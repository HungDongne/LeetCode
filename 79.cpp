#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution
{
public:
    bool visited[7][7] = {false};
    bool check(vector<vector<char>> &board, int x, int y, string &word, int k)
    {
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || visited[x][y] || board[x][y] != word[k])
        {
            return false;
        }
        if (k == word.size() - 1)
        {
            return true;
        }
        visited[x][y] = true;
        if (check(board, x + 1, y, word, k + 1) || check(board, x - 1, y, word, k + 1) || check(board, x, y + 1, word, k + 1) || check(board, x, y - 1, word, k + 1))
        {
            return true;
        }
        visited[x][y] = false;
        return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        for (auto i = 0; i < board.size(); i++)
        {
            for (auto j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == word[0]) {
                    if (check(board, i, j, word, 0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};