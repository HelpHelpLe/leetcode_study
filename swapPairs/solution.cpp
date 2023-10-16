#include "solution.h"

ListNode* Solution::swapPairs(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode* H = new ListNode(0);
    H->next = head;
    ListNode* p = H;
    ListNode* q = p->next;
    ListNode* r = q->next;
    while (p != nullptr && q != nullptr && r != nullptr)
    {
        p->next = r;
        p = q;
        q->next = r->next;
        r->next = q;
        if (p != nullptr)
            q = p->next;
        if (q != nullptr)
            r = q->next;
    }
    return H->next;
}
