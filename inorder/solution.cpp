#include "solution.h"

#include <stack>

vector<int> Solution::inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    stack<TreeNode *> s;
    vector<int> ans;
    TreeNode *node = root;
    while (node != nullptr || !s.empty()) {
        if (node != nullptr) {
            s.push(node);
            node = node->left;
        } else {
            node = s.top();
            s.pop();
            ans.emplace_back(node->val);
            node = node->right;
        }
    }
    return ans;
}
