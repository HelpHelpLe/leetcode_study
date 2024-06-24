#include <iostream>
#include <vector>

#include "solution.h"


bool create_list(std::vector<int> &nums, ListNode **head) {
    if (nums.size() < 1) return false;
    if (*head != nullptr) return false;
    *head = new ListNode(nums[0]);

    ListNode *p = *head;
    for (int i = 1; i < nums.size(); ++i) {
        p->next = new ListNode(nums[i]);
        p = p->next;
    }

    return true;
}

bool create_list(std::vector<int> &&nums, ListNode **head) {
    if (nums.size() < 1) return false;
    if (*head != nullptr) return false;
    *head = new ListNode(nums[0]);

    ListNode *p = *head;
    for (int i = 1; i < nums.size(); ++i) {
        p->next = new ListNode(nums[i]);
        p = p->next;
    }

    return true;
}

int main() {
    Solution solution;
    ListNode *head = nullptr;
    if (create_list({1, 2, 1}, &head)) {
        if (solution.isPalindrome(head)) {
            std::cout << "is palindrome" << std::endl;
        } else {
            std::cout << "is not palindrome" << std::endl;
        }
    }

    return 0;
}
