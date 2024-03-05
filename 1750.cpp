#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
    }
    int minimumLength(string s) {
        if (s.length() == 1) {
            return 1;
        }
        int i = 0, j = s.length() - 1;
        while (s[i] == s[j] && i < j) {
            while (s[i] == s[i + 1] && i < j) {
                i++;
            }
            while (s[j] == s[j - 1] && i < j) {
                j--;
            }
            i++;
            j--;
        }
        if (i > j) {
            return 0;
        } else {
            return j - i + 1;
        }
    }
};

int main() {
    cout << Solution().minimumLength("bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb") << endl;
}