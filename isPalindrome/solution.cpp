#include "solution.h"


bool Solution::isPalindrome(ListNode* head) {
    if (head->next == nullptr) return true;
    ListNode *slow = head, *fast = head;
    bool odd = false;
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
        if (fast == nullptr) {
            odd = true;
            break;
        }
        fast = fast->next;
    } 

    ListNode *p = head;
    ListNode *q;
    ListNode *dummy = new ListNode();
    while (p != slow) {
        q = p->next;
        p->next = dummy->next;
        dummy->next = p;
        p = q;
    }

    p = dummy->next;
    q = slow;
    if (odd) p = p->next;
    delete dummy;
    while (p != nullptr && q != nullptr) {
        if (p->val != q->val) return false;
        p = p->next;
        q = q->next;
    }
    
    if (p != nullptr | q != nullptr) return false;

    return true;
}
