#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() {
        this->val = 0;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode(int x) {
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode(int x, TreeNode *left, TreeNode* right) {
        this->val = x;
        this->left = left;
        this->right = right;
    }
};