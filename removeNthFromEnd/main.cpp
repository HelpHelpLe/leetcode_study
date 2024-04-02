#include <iostream>

#include "solution.h"

using namespace std;


auto create_list(int arr[], int len) -> ListNode * {
    if (len <= 0) {
        return nullptr;
    }
    ListNode *head = new ListNode(arr[0]);
    ListNode *tail = head;
    for (int i = 1; i < len; ++i) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }
    return head;
}

void print_list(ListNode *head) {
    ListNode *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 2;
    ListNode *head = create_list(arr, 5);
    print_list(head);
    Solution solution;
    head = solution.removeNthFromEnd(head, n);
    print_list(head);
    return 0;
}