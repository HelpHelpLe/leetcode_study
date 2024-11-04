#include "solution.h"

#include <stack>

vector<int> Solution::preorderTraversal(TreeNode* root) {
    // if (root == nullptr) {
    //     return {};
    // }
    // vector<int> ans;
    // stack<TreeNode *> s;
    // s.push(root);
    // while (!s.empty()) {
    //     TreeNode *node = s.top();
    //     s.pop();
    //     if (node != nullptr) {
    //         ans.emplace_back(node->val);
    //         s.push(node->right);
    //         s.push(node->left);
    //     }
    // }
    // return ans;
    
    if (root == nullptr) return {};

    std::vector<int> res;
    std::stack<TreeNode *> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* node = st.top(); st.pop();
        if (node != nullptr) {
            res.emplace_back(node->val);
            if (node->right != nullptr)
                st.push(node->right);
            if (node->left != nullptr)
                st.push(node->left);
        }
    }

    return res;
}
