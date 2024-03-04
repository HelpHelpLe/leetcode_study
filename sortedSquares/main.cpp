#include <iostream>

#include "solution.h"


using namespace std;


int main() {
    vector<int> nums = vector<int>{
        1
    };
    Solution solution;
    vector<int> ans = solution.sortedSquares(nums);
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
