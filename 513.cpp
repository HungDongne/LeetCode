#include <bits/stdc++.h>
#include "BinaryTree.cpp"
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



class Solution {
public:
    void inOrder(TreeNode * node, int height, int& currentHeight, int& resultValue) {
        if (node == nullptr) {
            return;
        }
        else {
            inOrder(node->left, height + 1, currentHeight, resultValue);
            if (currentHeight < height) {
                currentHeight = height;
                resultValue = node->val;
            }
            inOrder(node->right, height + 1, currentHeight, resultValue);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int currentHeight = -1, resultValue = -1;
        resultValue = root->val;
        inOrder(root, 0, currentHeight, resultValue);
        return resultValue;
    }
};