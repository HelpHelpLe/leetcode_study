#include <iostream>
#include <vector>
#include <queue>

#include "solution.h"

TreeNode *create_tree(std::vector<int> &nums) {
    if (nums.empty()) return nullptr;

    TreeNode *root = new TreeNode(nums[0]);

    std::queue<TreeNode *> q;

    q.push(root);

    TreeNode *node;
    int i = 1;
    while (!q.empty()) {
        node = q.front();
        q.pop();
        if (i < nums.size() && nums[i] != -1) {
            node->left = new TreeNode(nums[i]);
            q.push(node->left);
        }
        ++i;
        if (i < nums.size() && nums[i] != -1) {
            node->right = new TreeNode(nums[i]);
            q.push(node->right);
        }
        ++i;
    }
    return root;
}

int main() {
    std::vector<int> nums{3, 2, 3, -1, 3, -1, 1};

    auto root = create_tree(nums);

    Solution solution;

    int res = solution.rob(root);
    
    std::cout << res << std::endl;
    return 0;
}
