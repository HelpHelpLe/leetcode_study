#include <iostream>

#include "solution.h"

using namespace std;


int main() {
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution solution;
    vector<int> ans = solution.preorderTraversal(root);
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
