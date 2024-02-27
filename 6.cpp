#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1) {
            return s;
        }
        string result = "";
        int specialNum = 2 * numRows - 2;
        int len = s.length();
        for (int row = 0; row < numRows; row++)
        {
            int index1 = row;
            int index2 = specialNum - row;
            int old = index2;
            while (index1 < len && index2 < len)
            {
                if (index1 != index2 && index1 != old)
                {
                    result += s[index1];
                    result += s[index2];
                    //cout << "TYPE1: " << index1 << " " << index2 << " " << endl;
                    index1 += specialNum;
                    old = index2;
                    index2 += specialNum;
                }
                else
                {
                    result += s[index2];
                    //cout << "TYPE2: " << index1 << " " << index2 << " " << endl;
                    index1 += specialNum;
                    old = index2;
                    index2 += specialNum;
                }
            }
            if (index1 < len && index1 != old)
            {
                result += s[index1];
                //cout << index1 << " " << index2 << " " << endl;
            }
        }
        return result;
    }
};

int main()
{
    string s = "PAYPALISHIRING";
    cout << Solution().convert(s, 4);
}