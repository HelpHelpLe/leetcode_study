#include <iostream>
#include "solution.h"
using namespace std;


int main()
{
    ListNode* head = new ListNode(1);
    ListNode* p = head;
    for (int i = 2; i <= 4; i++)
    {
        p->next = new ListNode(i);
        p = p->next;
    }
    Solution solution = Solution();
    ListNode* new_head = solution.swapPairs(head);
    p = new_head;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}
