#include "solution.h"

int Solution::search(vector<int> &nums, int target)
{
    int n = nums.size();
    if (n == 0)
        return -1;
    if (n == 1)
        return nums[0] == target ? 0 : -1;
    if (nums[0] == target)
        return 0;
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) >> 1;
        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
        {
            if (nums[0] <= nums[mid] && target < nums[0])
                l = mid + 1;
            else
                h = mid - 1;
        }
        else
        {
            if (nums[0] > nums[mid] && target > nums[0])
                h = mid - 1;
            else
                l = mid + 1;
        }
    }
    return -1;
}
