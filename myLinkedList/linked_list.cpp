#include "linked_list.h"

MyLinkedList::MyLinkedList() {
    head = tail = nullptr;
}

void MyLinkedList::addAtHead(int val) {
    if (head == nullptr) {
        tail = head = new LinkedNode(val);
        return;
    }
    head = new LinkedNode(val, head);
}

void MyLinkedList::addAtTail(int val) {
    if (tail == nullptr) {
        head = tail = new LinkedNode(val);
        return;
    }
    tail->next = new LinkedNode(val);
    tail = tail->next;
}

int MyLinkedList::get(int index) {
    if (index < 0) {
        return -1;
    }
    LinkedNode *p = head;
    int i = 0;
    while (p != nullptr) {
        if (i == index) {
            return p->val;
        }
        p = p->next;
        i++;
    }
    return -1;
}

void MyLinkedList::addAtIndex(int index, int val) {
    if (index < 0) {
        return;
    }
    if (index == 0) {
        head = new LinkedNode(val, head);
        return;
    }
    LinkedNode *p = head;
    int i = 1;
    while (p != nullptr) {
        if (i == index) {
            LinkedNode *q = new LinkedNode(val, p->next);
            p->next = q;
            break;
        }
        i++;
        p = p->next;
    }
    if (p != nullptr) {
        if (p->next->next == nullptr) {
            tail = p->next;
        }
    }
}


void MyLinkedList::deleteAtIndex(int index) {
    if (head == nullptr) {
        return;
    }
    if (index < 0) {
        return;
    }
    if (index == 0) {
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
        }
    }
    LinkedNode *p = head;
    int i = 1;
    while (p != nullptr) {
        if (i == index) {
            if (p->next != nullptr) {
                p->next = p->next->next;
                break;
            }
        }
        i++;
        p = p->next;
    }
    if (p != nullptr && p->next == nullptr) {
        tail = p;
    }
}
