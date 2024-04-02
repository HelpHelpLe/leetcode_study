#include <iostream>

#include "solution.h"

using namespace std;

void print_list(ListNode* head) {
    if (head == nullptr) {
        return;
    }
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = new ListNode(8);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = headA->next->next;
    print_list(headA);
    print_list(headB);
    Solution solution;
    ListNode* node = solution.getIntersectionNode(headA, headB);
    cout << node->val << endl;
    return 0;
}
