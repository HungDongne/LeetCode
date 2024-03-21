#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<string> setTable;
        for (int i = 0; i < arr1.size(); ++i) {
            string str = to_string(arr1[i]);
            string tmp = "";
            for (auto c : str) {
                tmp += c;
                setTable.insert(tmp);
            }
        }
        for (auto s : setTable) {
            cout << s << " ";
        }
        int res = 0;
        for (int i : arr2) {
            string str = to_string(i);
            string tmp = "";
            for (auto c : str) {
                tmp += c;
                if (setTable.find(tmp) != setTable.end()) {
                    res = max(res, (int)tmp.size());
                }
            }
        }
        return res;
    }
};