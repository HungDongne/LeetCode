#include <bits/stdc++.h>
#include "ListNode.cpp"
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int index = v.size() - 1;
        while (temp != nullptr) {
            temp->val = v[index--];
            temp = temp->next;
        }
        return head;
    }
};