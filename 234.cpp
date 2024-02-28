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
class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    }
    bool isPalindrome(ListNode *head)
    {
        vector<int> arrays;
        while (head != nullptr)
        {
            arrays.push_back(head->val);
            head = head->next;
        }
        int i = 0, j = arrays.size() - 1;
        while (i < j)
        {
            if (arrays[i] != arrays[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};