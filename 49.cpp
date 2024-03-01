#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> indexs;
        int index = 1;
        vector<vector<string>> result;
        for (auto i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            indexs[s].push_back(strs[i]);
        }
        for (auto i = indexs.begin(); i != indexs.end(); i++) {
            if (i->second.size() > 0) {
                result.push_back(i->second);
            }
        }
        return result;
    }
};