#include "solution.h"
#include <algorithm>


int Solution::diameterOfBinaryTree(TreeNode* root) {
    int ans = 0;
    calculate(root, ans);
    return ans;
}


int Solution::calculate(TreeNode* root, int& max_diameter) {
    if (root == nullptr) return 0;

    int left_height = calculate(root->left, max_diameter);
    int right_height = calculate(root->right, max_diameter);

    int diameter = left_height + right_height;
    if (diameter > max_diameter) max_diameter = diameter;

    return std::max(left_height, right_height) + 1;
}
