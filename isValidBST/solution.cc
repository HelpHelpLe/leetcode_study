#include "solution.h"

#include <limits>


bool Solution::isValidBST(TreeNode* root) {
    return recurve(root, 
                   std::numeric_limits<long long>::min(), 
                   std::numeric_limits<long long>::max());
}


bool Solution::recurve(TreeNode* root, long long lower, long long upper) {
    if (root == nullptr) return true;

    if (root->val <= lower || root->val >= upper) return false;

    return recurve(root->left, lower, root->val) &&
           recurve(root->right, root->val, upper);
}
