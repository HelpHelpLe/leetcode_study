#include "solution.h"

int Solution::wiggleMaxLength(std::vector<int> &nums) {
    int pre_diff = 0;
    int cur_diff = 0;

    int cnt = 1;

    for (int i = 0; i < nums.size() - 1; ++i) {
        cur_diff = nums[i + 1] - nums[i];
        if ((pre_diff >= 0 && cur_diff < 0) || (pre_diff <= 0 && cur_diff > 0)) {
            ++cnt;
            pre_diff = cur_diff;
        }
    }
    return cnt;
}
