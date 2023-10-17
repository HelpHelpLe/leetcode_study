#include <iostream>
#include "solution.h"
using namespace std;


int main()
{
    vector<int> nums = vector<int>{
        1, 2, 3
    };
    Solution solution = Solution();
    solution.nextPermutation(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
