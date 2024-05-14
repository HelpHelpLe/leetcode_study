#include "solution.h"

int Solution::maxSubArray(std::vector<int> &nums) {
    int sum = 0;
    int res = 0;
    for (int num : nums) {
        sum += num;
        if (sum > res) res = sum;
        if (sum < 0) sum = 0;
    }
    return res;
}
