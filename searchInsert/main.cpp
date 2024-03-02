#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        1, 3, 4
    };
    int target = 2;
    int res = solution.searchInsert(nums, target);
    cout << res << endl;
    return 0;
}
