#include <bits/stdc++.h>
#include "ListNode.cpp"
using namespace std;

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ListNode *tmp = head;
        unordered_map<int, int> cnt;
        while (tmp != nullptr)
        {
            ++cnt[tmp->val];
            tmp = tmp->next;
        }
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;
        tmp = head;
        while (tmp != nullptr)
        {
            if (cnt[tmp->val] > 1)
            {
                prev->next = tmp->next;
            }
            else
            {
                prev = tmp;
            }
            tmp = tmp->next;
        }
        return dummy->next;
    }
};