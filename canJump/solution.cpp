#include "solution.h"

bool Solution::canJump(std::vector<int> &nums) {
    int k = 0;
    int size = nums.size();
    for (int i = 0; i < size; ++i) {
        if (i > k) return false;
        if (k < i + nums[i])
            k = i + nums[i];
    }
    return true;
}
