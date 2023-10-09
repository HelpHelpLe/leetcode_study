#include <iostream>
#include "solution.h"

using namespace std;


int main()
{
    ListNode* head = new ListNode(1);
    ListNode* p = head;
    for (int i = 2; i <= 5; i++)
    {
        p->next = new ListNode(i);
        p = p->next;
    }
    ListNode* ans = Solution().removeNthFromEnd(head, 2);
    p = ans;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}
