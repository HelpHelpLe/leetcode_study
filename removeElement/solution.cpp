#include "solution.h"


int Solution::removeElement(vector<int> &nums, int val) {
    int first = 0;
    int second = 0;
    int size = nums.size();
    while (second < size) {
        if (nums[second] != val) {
            nums[first] = nums[second];
            first++;
        }
        second++;
    }
    return first;
}
