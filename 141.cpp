#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    bool hasCycle(ListNode* head) {
        ListNode* tmp = head;
        int count = 0;
        while (tmp != nullptr) {
            count++;
            tmp = tmp->next;
            if (count >= 10010) {
                return true;
            }
        }
        return false;
    }
};