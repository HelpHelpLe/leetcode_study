#include "solution.h"

int Solution::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {
    int res = 0;
    int sum = 0;
    int cur_sum = 0;

    for (int i = 0; i < gas.size(); ++i) {
        sum += gas[i] - cost[i];
        cur_sum += gas[i] - cost[i];

        if (cur_sum < 0) {
            cur_sum = 0;
            res = i + 1;
        }
    }

    if (sum < 0) res = -1;

    return res;
}
