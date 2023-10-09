#include "solution.h"

ListNode* Solution::removeNthFromEnd(ListNode *head, int n)
{
    ListNode* p = head;
    ListNode* q = p;
    while (n--)
    {
        p = p->next;
    }
    if (p == nullptr)
        return head->next;
    p = p->next;
    while (p != nullptr)
    {
        q = q->next;
        p = p->next;
    }
    q->next = q->next->next;
    return head;
}
