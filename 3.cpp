#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        unordered_map<char, int> m;
        int left = 0, right = 1, res = 1;
        m[s[0]] = 1;
        while (right < s.size()) {
            if (m[s[right]] > 0) {
                while (s[left] != s[right]) {
                    --m[s[left]];
                    ++left;
                }
                --m[s[left]];
                ++left;
            }
            ++m[s[right]];
            res = max(res, right - left + 1);
            ++right;
        }
        return res;
    }
};