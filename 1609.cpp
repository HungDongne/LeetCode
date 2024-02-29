#include <bits/stdc++.h>
#include "BinaryTree.cpp"
#include <queue>
#include <stack>
using namespace std;

void bfs(queue<TreeNode *> &myQueue, int height, int &flag)
{
    if (myQueue.empty())
    {
        return;
    }
    queue<TreeNode *> newQueue;
    if (height % 2 == 1)
    {
        int oldValue = INT_MAX;
        while (!myQueue.empty())
        {
            TreeNode *tmpNode = myQueue.front();
            if (tmpNode->val % 2 == 1 || tmpNode->val >= oldValue)
            {
                flag = 1;
                return;
            }
            oldValue = tmpNode->val;
            if (tmpNode->left != nullptr)
            {
                newQueue.push(tmpNode->left);
            }
            if (tmpNode->right != nullptr)
            {
                newQueue.push(tmpNode->right);
            }
            myQueue.pop();
        }
    }
    else
    {
        int oldValue = INT_MIN;
        while (!myQueue.empty())
        {
            TreeNode *tmpNode = myQueue.front();
            if (tmpNode->val % 2 == 0 || tmpNode->val <= oldValue)
            {
                flag = 1;
                return;
            }
            oldValue = tmpNode->val;
            if (tmpNode->left != nullptr)
            {
                newQueue.push(tmpNode->left);
            }
            if (tmpNode->right != nullptr)
            {
                newQueue.push(tmpNode->right);
            }
            myQueue.pop();
        }
    }
    bfs(newQueue, height + 1, flag);
}
class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    }
    bool isEvenOddTree(TreeNode *root)
    {
        int flag = 0;
        queue<TreeNode *> myQueue;
        myQueue.push(root);
        bfs(myQueue, 0, flag);
        return !flag;
    }
};