#include "solution.h"


TreeNode* Solution::invertTree(TreeNode* root) {
    invert(root);
    return root;
}


void Solution::invert(TreeNode* root) {
    if (root == nullptr) return;

    invert(root->left);
    invert(root->right);

    TreeNode* node = root->left;
    root->left = root->right;
    root->right = node;
}
