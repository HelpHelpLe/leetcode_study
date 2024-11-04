#include <ctime>
#include <iostream>
#include <vector>

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

ListNode* create_list(const std::vector<int>& nums) {
    if (nums.empty()) return nullptr;

    ListNode* head = new ListNode(nums[0]);
    ListNode* tail = head;

    for (int i = 1; i < nums.size(); ++i) {
        tail->next = new ListNode(nums[i]);
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
    std::vector<int> nums {1, 2};
    int n = 1;
    ListNode *head = create_list(nums);
    print_list(head);
    Solution solution;
    head = solution.removeNthFromEnd(head, n);
    print_list(head);
    return 0;
}
