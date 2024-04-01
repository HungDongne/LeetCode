#include <bits/stdc++.h>

using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


class Solution {
public:
    int lengthOfLastWord(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = s.size();
        while (s.back() == ' ') {
            s.pop_back();
            --n;
        }
        s = ' ' + s;
        int last = n - 1;
        while (s[last] != ' ') {
            --last;
        }
        return n - last;
    }
};

int main() {
    Solution solution;
    cout << solution.lengthOfLastWord("day") << endl;
    return 0;
}