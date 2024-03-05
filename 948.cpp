#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if (tokens.size() == 0) {
            return 0;
        }
        sort(tokens.begin(), tokens.end());
        int left = 0, right = tokens.size() - 1, score = 0;
        while (left <= right && power >= tokens[left]) {
            power -= tokens[left++];
            score++;
        }
        int res = score;
        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                left++;
                score++;
                res = max(res, score);
            } else if (score > 0) {
                power += tokens[right];
                right--;
                score--;
            } else {
                break;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> tokens = {26};
    int power = 51;
    cout << solution.bagOfTokensScore(tokens, power) << endl;
    return 0;
}