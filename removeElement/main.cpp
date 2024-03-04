#include <iostream>


#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = vector<int>{
        1, 2, 3, 4
    };
    int val = 2;
    int res = solution.removeElement(nums, val);
    for (int i = 0; i < res; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
