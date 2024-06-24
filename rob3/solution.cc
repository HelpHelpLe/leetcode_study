#include "solution.h"
#include <algorithm>

std::pair<int, int> Solution::__rob(TreeNode *root) {
    if (root == nullptr) return {0, 0};

    // pair first -> not steal current
    // pair second -> steal current
    auto left_pair = __rob(root->left);
    auto right_pair = __rob(root->right);

    int first = std::max(left_pair.first, left_pair.second) +
                std::max(right_pair.first, right_pair.second);

    int second = root->val + left_pair.first + right_pair.first;

    return {first, second};
}

int Solution::rob(TreeNode *root) {
    auto root_pair = __rob(root);

    return std::max(root_pair.first, root_pair.second);
}
