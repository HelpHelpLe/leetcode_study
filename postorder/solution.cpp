#include "solution.h"

#include <stack>
#include <algorithm>

vector<int> Solution::postorderTraversal(TreeNode* root) {
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
            s.push(node->left);
            s.push(node->right);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
