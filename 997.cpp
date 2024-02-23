#include <bits/stdc++.h>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{
    bool visited[1010];
    map <int, int> m;
    memset(visited, false, sizeof(visited));
    for (auto i = 0; i <= n; i++)
    {
        m[i] = 0;
    }
    for (vector<int> vec : trust) {
        int a = vec[0];
        int b = vec[1];
        visited[a] = true;
        m[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && m[i] == n - 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> trust;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < 2; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        trust.push_back(temp);
    }
    cout << findJudge(n, trust) << endl;
    // for (int i = 0; i < trust.size(); i++) {
    //     for (int j = 0; j < trust[i].size(); j++) {
    //         cout << trust[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}