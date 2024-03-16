#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long y = 0, z = x;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return y == z;
    }    
};