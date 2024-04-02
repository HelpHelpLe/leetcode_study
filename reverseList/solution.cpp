#include "solution.h"

ListNode* Solution::reverseList(ListNode *head) {
    ListNode *dump = new ListNode();
    ListNode *temp = head;
    while (temp != nullptr) {
        head = head->next;
        temp->next = dump->next;
        dump->next = temp;
        temp = head;
    }
    return dump->next;
}