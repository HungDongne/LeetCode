#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n)
{
    vector<int> res;
    for (auto i = 0; i <= n; i++) {
        res.push_back(__builtin_popcount(i));
    }
    return res;
}
};