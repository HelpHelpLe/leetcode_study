#include "solution.h"


TreeNode* Solution::sortedArrayToBST(vector<int>& nums) {
    return recurve(nums, 0, nums.size() - 1);
}

TreeNode* Solution::recurve(vector<int> &nums, int left, int right) {
    if (left > right) return nullptr;

    int mid = (left + right) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    root->left = recurve(nums, left, mid - 1);
    root->right = recurve(nums, mid + 1, right);

    return root;
}
