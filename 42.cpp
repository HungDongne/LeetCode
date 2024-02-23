#include <bits/stdc++.h>
#include <vector>
#include <stack>
#include <math.h>
#include <limits>

using namespace std;
int calculate(int height1, int height2, int pos1, int pos2)
{
    return (abs(pos1 - pos2) - 1) * (min(height1, height2));
}

int trap(vector<int> &height)
{
    int dodai = height.size();
    int highest[dodai + 10];
    int highest_right_to_left[dodai + 10];
    int mangcongdon[dodai + 10];
    
    height.insert(height.begin(), -1);
    height.insert(height.end(), -1);
    highest[0] = -1;
    highest_right_to_left[height.size() - 1] = -1;
    int res = 0;

    for (auto i = 1; i < height.size(); i++)
    {
        if (height[i] > highest[i - 1]) {
            highest[i] = height[i];
        } else {
            highest[i] = highest[i - 1];
        }
    }

    for (auto i = height.size() - 2; i > 0; i--) {
        highest_right_to_left[i] = max(highest_right_to_left[i + 1], height[i]);
    }
    
    // for (int i = 1; i < height.size() - 1; i++) {
    //     cout << height[i] << " " << highest[i - 1] << " " << highest_right_to_left[i + 1] << endl;
    // }

    mangcongdon[0] = 0;
    for (int i = 1; i < height.size() - 1; i++) {
        mangcongdon[i] = mangcongdon[i - 1] + height[i];
    }

    bool not_edge[dodai + 10];
    memset(not_edge, false, sizeof(not_edge));

    for (auto i = 1; i < height.size() - 1; i++) {
        if (height[i] < highest[i - 1] && height[i] < highest_right_to_left[i + 1]) {
            not_edge[i] = true;
        }
    }

    // for (auto i = 1; i < height.size() - 1; i++) {
    //     cout << !not_edge[i] << " ";
    // }


    int giatri1 = -1, vitri1 = -1;
    for (auto i = 1; i < height.size() - 1; i++) {
        if(!not_edge[i]) {
            // cout << height[i] << " " << i << endl;
            if (giatri1 == -1) {
                giatri1 = height[i];
                vitri1 = i;
            }
            else {
                res += calculate(giatri1, height[i], vitri1, i) - mangcongdon[i - 1] + mangcongdon[vitri1];
                giatri1 = height[i];
                vitri1 = i;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> height;
    while (n--) {
        int x;
        cin >> x;
        height.push_back(x);
    }
    // for (int i : height) {
    //     cout << i << " ";
    // }
    cout << endl << trap(height);
}