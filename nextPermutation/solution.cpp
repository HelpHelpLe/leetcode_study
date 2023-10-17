#include "solution.h"
#include <algorithm>


void Solution::nextPermutation(vector<int> &nums)
{
    vector<int>::iterator it = nums.end();
    int n = nums.size();
    int cur = nums[n - 1];
    while (it != nums.begin())
    {
        it--;
        if (*it >= cur)
            cur = *it;
        else
            break;
    }
    if (*it >= cur)
    {
        sort(it, nums.end());
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (*it < nums[i])
        {
            int temp = *it;
            *it = nums[i];
            nums[i] = temp;
            break;
        }
    }
    sort(++it, nums.end());
}
