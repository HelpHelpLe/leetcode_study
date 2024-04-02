#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4, head->next->next);
    Solution solution;
    ListNode* node = solution.detectCycle(head);
    if (node != nullptr)
        cout << node->val << endl;
    return 0;
}
