#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int length = gas.size();
        int gasAvailable = 0;
        int gasUsed = 0;
        int paid = 0;
        int startingPoint = 0;
        for (int i=0; i<length; ++i) {
            gasUsed += gas[i];
            paid += cost[i];
            gasAvailable += gas[i] - cost[i];
            if (gasAvailable < 0) {
                gasAvailable = 0;
                startingPoint = i + 1;
            }
        }
        return paid > gasUsed ? -1 : startingPoint;
    }
};

int
main()
{
    Solution solution;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    cout << solution.canCompleteCircuit(gas, cost) << endl;
    gas = {2, 3, 4};
    cost = {3, 4, 3};
    cout << solution.canCompleteCircuit(gas, cost) << endl;
    return 0;
}