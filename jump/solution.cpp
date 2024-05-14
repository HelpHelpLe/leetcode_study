#include "solution.h"


int Solution::jump(std::vector<int> &nums) {
    int i = 0;
    int j = 0;
    int k = 0;
    int cnt = 0;

    while (j < nums.size() - 1) {
        while (i <= j) {
            k = std::max(k, i + nums[i]);
            ++i;
        }
        ++cnt;
        j = k;
    }
    return cnt;
}
