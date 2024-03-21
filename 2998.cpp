#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int minimumOperationsToMakeEqual(int x, int y)
    {
        if (x <= y)
        {
            return y - x;
        }
        queue<int> q;
        q.push(x);
        int res = 0;
        set<int> check;
        check.insert(x);
        while (true) {
            queue<int> next;
            while(!q.empty()) {
                int i = q.front();
                q.pop();
                if (i == y) {
                    return res;
                }
                if (i % 5 == 0) {
                    if (check.find(i / 5) == check.end()) {
                        next.push(i / 5);
                        check.insert(i / 5);
                    }
                }
                if (i % 11 == 0) {
                    if (check.find(i / 11) == check.end()) {
                        next.push(i / 11);
                        check.insert(i / 11);
                    }
                }
                if (check.find(i - 1) == check.end()) {
                    next.push(i - 1);
                    check.insert(i - 1);
                }
                if (check.find(i + 1) == check.end()) {
                    next.push(i + 1);
                    check.insert(i + 1);
                }
            }
            q = next;
            res++;
        }
    }
};
int main()
{
    cout << Solution().minimumOperationsToMakeEqual(26, 1) << endl;
}