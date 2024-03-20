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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp = list1;
        int i = 0;
        while (i < a - 1) {
            tmp = tmp->next;
            i++;
        }
        ListNode* tmp2 = tmp;
        while (i <= b) {
            tmp2 = tmp2->next;
            i++;
        }
        ListNode* tmp3 = list2;
        while (tmp3->next != NULL) {
            tmp3 = tmp3->next;
        }
        tmp3->next = tmp2;
        tmp->next = list2;
        return list1;
    }
};