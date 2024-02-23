#include <iostream>

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int tmp = left;
        for (int i = left + 1; i <= right; i++) {
            tmp = tmp and i;
        }
        return tmp;
    }
};

using namespace std;

int main() {
    int left, right;
    cin >> left, right;
    Solution hung;
    cout << hung.rangeBitwiseAnd(left, right);
}