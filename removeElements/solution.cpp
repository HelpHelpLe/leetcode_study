#include "solution.h"

ListNode* Solution::removeElements(ListNode *head, int val) {
    ListNode *dummy = new ListNode(-1, head);
    ListNode *p = dummy;
    ListNode *q = head;
    while (q != nullptr) {
        if (q->val == val) {
            p->next = q->next;
        } else {
            p = p->next;
        }
        q = q->next;
    }
    return dummy->next;
}
 
