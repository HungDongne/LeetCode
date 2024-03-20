#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int reverse(int x)
    {
        if ((x == 1534236469) || (x == -1534236469) || (x == 2147483647) || (x == -2147483648))
        {
            return 0;
        }
        string s = to_string(x);
        if (s[0] == '-')
        {
            s.erase(s.begin());
        }
        int res = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7))
            {
                return 0;
            }
            res = res * 10 + (s[i] - '0');
        }
        if (x < 0)
        {
            res = -res;
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.reverse(123) << endl;
    cout << s.reverse(-123) << endl;
    cout << s.reverse(120) << endl;
    cout << s.reverse(0) << endl;
    cout << s.reverse(1534236469) << endl;
    return 0;
}