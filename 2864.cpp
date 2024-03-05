#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    string maximumOddBinaryNumber(string s) {
        if (s == "1") {
            return s;
        }
        int i = 0;
        while (i < s.size() && s[i] == '0') i++;
        s.erase(i, 1);
        sort(s.begin(), s.end(), greater<char>());
        return s += "1";
    }
};