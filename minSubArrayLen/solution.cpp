#include "solution.h"

int Solution::minSubArrayLen(int target, vector<int> &nums) {
    int sum = 0;
    int size = nums.size();
    int i = 0;
    int len = size + 1;
    int tmp = 0;
    for (int j = 0; j < size; j++) {
        sum += nums[j];
        while (sum >= target) {
            tmp = j - i + 1;
            len = tmp < len ? tmp : len;
            sum -= nums[i];
            i++;
        }
    }
    return len == size + 1 ? 0 : len;
}
