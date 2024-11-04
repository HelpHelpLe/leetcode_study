#include "solution.h"

#include <stack>

int Solution::kthSmallest(TreeNode* root, int k) {
    std::stack<TreeNode *> st;

    while (root != nullptr || !st.empty()) {
        if (root != nullptr) {
            st.push(root);
            root = root->left;
        } else {
            root = st.top(); st.pop();
            --k;
            if (k == 0) break;
            root = root->right;
        }
    }
    return root->val;
}
