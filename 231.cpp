#include <bits/stdc++.h>
#include <math.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        if (n == 0) return false;
        if (n % 2 == 1) return false;
        return isPowerOfTwo(n / 2);
    }
};

using namespace std;

int main () {
    cout << Solution().isPowerOfTwo(8) << endl;
}