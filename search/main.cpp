#include <iostream>
#include "solution.h"

using namespace std;


int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        -1, 0, 3, 5, 9, 12
    };
    int target = 9;
    int res = solution.search(nums, target);
    cout << res << endl;
    return 0;
}
