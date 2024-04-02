#pragma once

struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int v): val(v), next(nullptr) {}
    ListNode(int v, ListNode* node): val(v), next(node) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head);
};
