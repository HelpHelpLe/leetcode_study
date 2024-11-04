#include "solution.h"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n) {
    // ListNode *dump = new ListNode();
    // dump->next = head;
    // ListNode *fast = head;
    // ListNode *slow = dump;
    // for (int i = 0; i < n; ++i) {
    //     fast = fast->next;
    // }

    // while (fast != nullptr) {
    //     fast = fast->next;
    //     slow = slow->next;
    // }
    // if (slow->next != nullptr) {
    //     slow->next = slow->next->next;
    // }
    // head = dump->next;
    // delete dump;
    // dump = nullptr;
    // return head;
    
    ListNode* p = head;
    ListNode* q = head;

    for (int i = 0; i < n; ++i) {
        q = q->next;
    }

    if (q == nullptr) return p->next;

    while (q->next != nullptr) {
        q = q->next;
        p = p->next;
    }

    p->next = p->next->next;

    return head;
}
