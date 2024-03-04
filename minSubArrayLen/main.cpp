#include <iostream>

#include "solution.h"

using namespace std;


int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        1, 2, 3, 4
    };
    int target = 7;
    int res = solution.minSubArrayLen(target, nums);
    cout << res << endl;
    return 0;
}
