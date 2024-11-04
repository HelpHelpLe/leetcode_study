#include "solution.h"

#include <iostream>

void print_tree(TreeNode* root) {
    if (root == nullptr) return;

    print_tree(root->left);
    std::cout << root->val << " ";
    print_tree(root->right);
}

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    TreeNode* root_left = root->left;
    root_left->left = new TreeNode(1);
    root_left->right = new TreeNode(3);

    TreeNode* root_right = root->right;
    root_right->left = new TreeNode(6);
    root_right->right = new TreeNode(9);

    Solution solution;

    TreeNode* ans = solution.invertTree(root);

    print_tree(root);

    return 0;
}
