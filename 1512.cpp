#include <bits/stdc++.h>

using namespace std;

int convolution(int n, int k) {
    int res = 1;
    for(int i = 0; i < k; i++) {
        res *= (n-i);
    }
    for(int i = 1; i <= k; i++) {
        res /= i;
    }
    return res;
}

int numIdenticalPairs(vector<int>& nums) {
    int res = 0;
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }
    for(auto i : mp) {
        res += convolution(i.second, 2);
    }
    return res;
}