#include <iostream>

#include <queue>

#include "solution.h"

using namespace std;

TreeNode *create_tree(int arr[], int len) {
    if (len <= 0 || arr[0] < 0) {
        return nullptr;
    }
    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < len) {
        TreeNode *node = q.front();
        q.pop();
        if (arr[i] >= 0) {
            node->left = new TreeNode(arr[i]);
            q.push(node->left);
        }
        i++;
        if (arr[i] >= 0) {
            node->right = new TreeNode(arr[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

int main() {
    int arr[7] = {1, 2, 3, -1, -1, 4, 5};
    TreeNode *root = create_tree(arr, 7);
    Solution solution;
    vector<int> ans = solution.inorderTraversal(root);
    for (auto i : ans) {
        cout << i << endl;
    }
    return 0;
}
