#include "solution.h"

#include <iostream>


int main() {
    Solution solution;

    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);

    // TreeNode* root_left = root->left;
    // root_left->left = new TreeNode(4);
    // root_left->right = new TreeNode(5);

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);

    int ans = solution.diameterOfBinaryTree(root);

    std::cout << ans << std::endl;
    return 0;
}
