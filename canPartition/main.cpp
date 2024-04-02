#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {1, 5, 11, 5};
    bool ans = solution.canPartition(nums);
    cout << ans << endl;
    return 0;
}