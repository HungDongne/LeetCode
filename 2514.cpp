#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;
    Solution() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    unsigned long long permunate(int& n) {
        unsigned long long res = 1;
        for (int i = 1; i <= n; i++) {
            res = (res * i) % MOD;
        }
        return res;
    }
    unsigned long long countP(string& s) {
        unsigned long long res = 1;
        map<char, int> m;
        for (auto c : s) {
            m[c]++;
        }
        for (auto it : m) {
            res = (res * permunate(it.second)) % MOD;
        }
        return res;
    }
    int countAnagrams(string s) {
        s += " ";
        unsigned long long res = 1;
        int index = 0;
        string tmp = "";
        vector<string> strings;
        while (index < s.size()) {
            if (s[index] == ' ') {
                strings.push_back(tmp);
                tmp = "";
            } else {
                tmp += s[index];
            }
            index++;
        }
        for (auto str : strings) {
            cout << countP(str) << endl;
        }
        index = 1;
        int i = 0;
        for (auto c : s) {
            if (c == ' ') {
                res =  (res / countP(strings[i])) % MOD;
                // res =  (res) % MOD;
                i++;
                index = 1;
            } else {
                res = (res * index) % MOD;
                index++;
            }
        }
        return res;
    }
};

int main()
{
    cout << Solution().countAnagrams("b okzojaporykbmq tybq zrztwlolvcyumcsq jjuowpp");
    return 0;
}
