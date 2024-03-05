#pragma once

struct LinkedNode {
   int val;
   LinkedNode *next;
   LinkedNode(): val(0), next(nullptr) {}
   LinkedNode(int v): val(v), next(nullptr) {}
   LinkedNode(int v, LinkedNode *n): val(v), next(n) {}
};

class MyLinkedList {
public:

    MyLinkedList();

    int get(int index);

    void addAtHead(int val);

    void addAtTail(int val);

    void addAtIndex(int index, int val);

    void deleteAtIndex(int index);

    LinkedNode *head;
    LinkedNode *tail;
};
