#include "solution.h"

void Solution::moveZeroes(vector<int> &nums) {
    int slow = 0;
    int fast = 0;
    int size = nums.size();
    while (fast < size) {
        if (nums[fast] != 0) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    while (slow < size) {
        nums[slow] = 0;
        slow++;
    }
}
