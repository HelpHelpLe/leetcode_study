#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 1};
    int target = 1;
    int ans = solution.findTargetSumWays(nums, target);
    cout << ans << endl;
    return 0;
}
