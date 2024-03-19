#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int leastInterval(vector<char> &tasks, int n)
    {
        map<char, int> cnt;
        for (auto c : tasks)
        {
            cnt[c]++;
        }
        priority_queue<int> pq;
        for (auto m : cnt)
        {
            pq.push(m.second);
        }
        int res = 0;
        while (!pq.empty())
        {
            vector<int> tmp;
            for (auto i = 0; i <= n; i++)
            {
                if (!pq.empty())
                {
                    if (pq.top() > 1)
                        tmp.push_back(pq.top() - 1);
                    pq.pop();
                }
                res++;
                if (tmp.size() == 0 && pq.empty())
                    break;
            }
            for (auto t : tmp)
            {
                pq.push(t);
            }
            cout << endl;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n = 2;
    cout << s.leastInterval(tasks, n) << endl;
    return 0;
}
