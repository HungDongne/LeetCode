#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int test(vector<int>& gas, vector<int>& cost, int start) {
        int n = gas.size();
        int tank = 0;
        for (int i = 0; i < n; ++i) {
            int j = (start + i) % n;
            tank += gas[j] - cost[j];
            if (tank < 0) {
                return j;
            }
        }
        return -1;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i = 0;
        while (i < gas.size()) {
            int j = test(gas, cost, i);
            if (j == -1) {
                return i;
            }
            i = j + 1;
        }
        return -1;
    }
};