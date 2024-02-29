#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    }
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for (int index = 0; index < s.size(); index++) {
            if (index + 1 < s.size() && m[s[index]] < m[s[index + 1]]) {
                sum -= m[s[index]];
            } else {
                sum += m[s[index]];
            }
        }
        return sum;
    }
};