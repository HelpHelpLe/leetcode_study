#include "solution.h"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n) {
    ListNode *dump = new ListNode();
    dump->next = head;
    ListNode *fast = head;
    ListNode *slow = dump;
    for (int i = 0; i < n; ++i) {
        fast = fast->next;
    }

    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    if (slow->next != nullptr) {
        slow->next = slow->next->next;
    }
    head = dump->next;
    delete dump;
    dump = nullptr;
    return head;
}