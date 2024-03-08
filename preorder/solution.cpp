#include "solution.h"

#include <stack>

vector<int> Solution::preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    vector<int> ans;
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty()) {
        TreeNode *node = s.top();
        s.pop();
        if (node != nullptr) {
            ans.emplace_back(node->val);
            s.push(node->right);
            s.push(node->left);
        }
    }
    return ans;
}
