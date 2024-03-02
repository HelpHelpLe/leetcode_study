#include "solution.h"

// vector<int> Solution::searchRange(vector<int> &nums, int target) {
//     int low = 0;
//     int size = nums.size();
//     if (size == 0) {
//         return {-1, -1};
//     }
//     int high = size;
//     int mid = 0;
//     while (low < high) {
//         mid = low + ((high - low) >> 1);
//         if (nums[mid] < target) {
//             low = mid + 1;
//         } else if (target < nums[mid]) {
//             high = mid;
//         } else {
//             break;
//         }
//     }
//     if (nums[mid] != target) {
//         return {-1, -1};
//     }
//     low = high = mid;
//     while (low >= 0 && nums[low] == target) {
//         low--;
//     }
//     while (high < size && nums[high] == target) {
//         high++;
//     }
//     return {low + 1, high - 1};
// }

vector<int> Solution::searchRange(vector<int> &nums, int target) {
    int low = 0;
    int size = nums.size();
    int high = size - 1;
    int mid = 0;
    int low_bound = -2;
    int high_bound = -2;
    while (low <= high) {
        mid = low + ((high - low) >> 1);
        if (nums[mid] <= target) {
            low = mid + 1;
            high_bound = low;
        } else {
            high = mid - 1;
        }
    }
    low = 0;
    high = size - 1; 
    while (low <= high) {
        mid = low + ((high - low) >> 1);
        if (target <= nums[mid]) {
            high = mid - 1;
            low_bound = high;
        } else {
            low = mid + 1;
        }
    }
    if (low_bound == -2 || high_bound == -2) return {-1, -1};
    if (high_bound - low_bound > 1) return {low_bound + 1, high_bound - 1};
    return {-1, -1};
}
