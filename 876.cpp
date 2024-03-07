#include <bits/stdc++.h>
#include "ListNode.cpp"
using namespace std;

class Solution {
public:
    Solution() {
        ios::ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};