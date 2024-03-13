#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool check(int n) {
        map<int, int> m;
        string s = to_string(n);
        for (auto c : s) {
            if (c == '0') {
                return false;
            }
            m[c - '0']++;
        }
        for (auto i = 1; i <= 9; i++) {
            if (m[i] >= 1 && m[i] != i) {
                return false;
            }
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        for (int i = n + 1; i <= 1224444; i++) {
            if (check(i)) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    int n = 780001;
    cout << s.nextBeautifulNumber(n) << endl;
    return 0;
}
