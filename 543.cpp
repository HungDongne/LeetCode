#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int travel(TreeNode* node, int& maxRes) {
    if (node == nullptr) {
        return 0;
    }
    else {
        int sumRight = travel(node->right, maxRes), sumLeft = travel(node->left, maxRes);
        if (maxRes < sumRight + sumLeft) {
            maxRes = sumRight + sumLeft;
            cout << maxRes << " " << node->val << endl;
        }
        return 1 + max(sumRight, sumLeft);
    }
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxRes = 0;
        travel(root, maxRes);
        return maxRes;
    }
};