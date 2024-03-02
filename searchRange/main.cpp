#include <iostream>

#include "solution.h"

using namespace std;


int main() {
    Solution solution;
    vector<int> nums = vector<int>{
    };

    int target = 0;
    auto ans = solution.searchRange(nums, target);
    for (auto i : ans) {
        cout << i << endl;
    }
    return 0;
}
