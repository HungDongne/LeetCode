#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> counter;
        for (int i = 0; i <= nums.size(); i++) {
            counter[i] = false;
        }
        for (auto i : nums) {
            counter[i] = true;
        }
        for (int i = 0; i <= nums.size(); i++) {
            if (counter[i] == false) {
                return i;
            }
        }
    }
};

