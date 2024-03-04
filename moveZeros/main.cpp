#include <iostream>

#include "solution.h"


using namespace std;


int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        1, 2, 0, 0, 3, 4
    };

    solution.moveZeroes(nums);
    for (auto i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
