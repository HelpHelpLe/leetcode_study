#include <iostream>
#include "solution.h"
using namespace std;


int main()
{
    vector<int> nums = vector<int>
    {
        4, 5, 6, 7, 0, 1, 2
    };
    Solution solution = Solution();
    int ans = solution.search(nums, 4);
    cout << ans << endl;
    return 0;
}
