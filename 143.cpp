#include <bits/stdc++.h>
#include "ListNode.cpp"
using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    void reorderList(ListNode* head) {
        if (!head) return;
        vector<ListNode*> v;
        ListNode* p = head;
        while (p) {
            v.push_back(p);
            p = p->next;
        }
        int i = 0, j = v.size() - 1;
        while (i < j) {
            v[i]->next = v[j];
            ++i;
            if (i == j) break;
            v[j]->next = v[i];
            --j;
        }
        v[i]->next = nullptr;
    }
};