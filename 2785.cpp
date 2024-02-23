#include <bits/stdc++.h>

using namespace std;

string sortVowels(string s)
{
    vector<char> vowels;
    vector <bool> flag;
    for (auto i = 0; i <= s.length(); i++) {
        flag.push_back(0);
    }
    for (auto i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowels.push_back(s[i]);
            flag[i] = 1;
        }
    }
    sort(vowels.begin(), vowels.end());
    string res = "";
    for (auto i = 0; i < s.length(); i++) {
        if (flag[i]) {
            res += vowels[0];
            vowels.erase(vowels.begin());
        } else {
            res += s[i];
        }
    }
    return res;
}

int main()
{
    string s = "lEetcOde";
    cout << sortVowels(s) << endl;
}