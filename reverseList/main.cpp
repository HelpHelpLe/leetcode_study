#include <iostream>

#include "solution.h"

using namespace std;

auto create_list(int arr[], int len) -> ListNode * {
    ListNode *dump = new ListNode();
    ListNode *tail = dump;
    for (int i = 0; i < len; i++) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }
    ListNode *head = dump->next;
    delete dump;
    dump = nullptr;
    return head;
}

void print_list(ListNode *head) {
    ListNode *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    temp = nullptr;
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ListNode *head = create_list(arr, 5);
    print_list(head);
    Solution solution;
    head = solution.reverseList(head);
    print_list(head);
    return 0;
}
