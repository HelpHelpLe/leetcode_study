#include <iostream>

#include "linked_list.h"

using namespace std;

void print_list(MyLinkedList &list) {
    LinkedNode *p = list.head;
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    MyLinkedList list;
    list.addAtHead(7);
    print_list(list);
    list.addAtHead(2);
    print_list(list);
    list.addAtHead(1);
    print_list(list);
    list.addAtIndex(3, 0);
    print_list(list);
    list.deleteAtIndex(2);
    print_list(list);
    list.addAtHead(6);
    print_list(list);
    list.addAtTail(4);
    print_list(list);
    cout << list.get(4) << endl;
    return 0;
}
