#include "solution.h"


int Solution::removeDuplicates(vector<int> &nums) {
    int slow = 1;
    int fast = 1;
    int size = nums.size();
    while (fast < size) {
        if (nums[fast] != nums[fast - 1]) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}
