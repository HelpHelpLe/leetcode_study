#include "solution.h"

ListNode* Solution::detectCycle(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            break;
        }
    }
    ListNode* tail = fast;
    if (tail == nullptr || tail->next == nullptr) {
        return nullptr;
    }
    fast = head;
    slow = tail;
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
        if (fast == slow) {
            return fast;
        }
        if (slow == tail) {
            slow = head;
        }
    }
    return fast;
}
