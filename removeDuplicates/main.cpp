#include <iostream>
#include "solution.h"

using namespace std;


int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        0, 0, 1, 1, 1, 2, 2, 3, 3, 4
    };
    int res = solution.removeDuplicates(nums);
    for (int i = 0; i < res; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
