#include "solution.h"

ListNode* Solution::getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* first = headA;
    ListNode* second = headB;
    while (first != nullptr && second != nullptr) {
        if (first == second) {
            return first;
        }
        first = first->next;
        second = second->next;
        if (first == nullptr && second == nullptr) {
            return nullptr;
        }
        if (first == nullptr) {
            first = headB;
        }
        if (second == nullptr) {
            second = headA;
        }
    }
    return nullptr;
}
