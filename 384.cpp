#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> original;
    vector<int> shuffled;
    Solution(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        this->original = nums;
        this->shuffled = nums;
    }
    
    vector<int> reset() {
        shuffled = original;
        return this->original;
    }
    
    vector<int> shuffle() {
        random_shuffle(this->shuffled.begin(), this->shuffled.end());
        return this->shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */