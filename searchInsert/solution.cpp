#include "solution.h"


int Solution::searchInsert(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size();
    int mid, i;
    while (low < high) {
        mid = low + ((high - low) >> 1);
        i = nums[mid];
        if (i < target) {
            low = mid + 1;
        } else if (target < i) {
            high = mid;
        } else {
            return mid;
        }
    }
    return low;
}
