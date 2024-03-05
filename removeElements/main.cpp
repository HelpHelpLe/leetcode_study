#include <iostream>

#include "solution.h"

using namespace std;


ListNode *create(int arr[], int len) {
    ListNode *dummy = new ListNode();
    ListNode *p = dummy;
    for (int i = 0; i < len; i++) {
        p->next = new ListNode(arr[i]);
        p = p->next;
    }
    return dummy->next;
}

void print_list(ListNode *head) {
    ListNode *p = head;
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}


int main() {
    int arr[7] = {1, 2, 6, 3, 4, 5, 6};
    ListNode *head = create(arr, 7);
    printf("原始链表：\n");
    print_list(head);
    Solution solution;
    int val = 6;
    head = solution.removeElements(head, val);
    printf("删除元素%d后的链表：\n", val);
    print_list(head);
    return 0;
}
