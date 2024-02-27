#include <bits/stdc++.h>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int maxWidth) {
    int countWord = 0;
    int countSpace = 0;
    vector<string> res;
    vector<string> tmp;
    for (auto string : words) {
        if (countWord + string.size() <= maxWidth) {
            tmp.push_back(string);
            countWord += string.size() + 1;
        }
        else {
            countSpace = maxWidth - countWord + tmp.size();
            std::string tmpRes = "";
            int j = 0;
            for (int i = 0; i < countSpace; i++) {
                tmp[j] += " ";
                j++;
                if (j >= tmp.size() - 1) {
                    j = 0;
                }
            }
            for (std::string s : tmp) {
                tmpRes += s;
            }
            countSpace = 0;
            res.push_back(tmpRes);
            countWord = string.size() + 1;
            tmp.clear();
            tmp.push_back(string);
        }
    }
    std::string tmpRes ="";
    countSpace = maxWidth - countWord + tmp.size();
    for (string s : tmp) {
        tmpRes+= s;
        if (countSpace > 0) {
            countSpace--;
            tmpRes+=" ";
        }
    }
    for (int i = 0;i < countSpace; i++) {
        tmpRes+=" ";
    }
    res.push_back(tmpRes);
    return res;
}
};

int main()
{
    vector<string> words = {"ask","not","what","your","country","can","do","for","you","ask","what","you","can","do","for","your","country"};
    int maxWidth = 16;
    vector<string> result = Solution().fullJustify(words, maxWidth);
    for (auto string : result)
    {
        cout << string << endl;
    }
    return 0;
}