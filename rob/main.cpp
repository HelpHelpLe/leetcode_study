#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    int ans = solution.rob(nums);
    cout << ans << endl;
    return 0;
}