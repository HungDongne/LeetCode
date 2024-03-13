#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int pivotInteger(int n) {
        for (double i = 1; i <= n; i++) {
            double left = (i / 2) * (1 + i), right = (n - i + 1) / 2 * (n + i);
            if (left == right) {
                return i;
            }
        }
        return -1;
    }
};