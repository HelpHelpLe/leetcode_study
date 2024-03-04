#include "solution.h"

vector<int> Solution::sortedSquares(vector<int> &nums) {
    int right = 0;
    int size = nums.size();
    while (right < size) {
        if (nums[right] >= 0) {
            break;
        }
        right++;
    }
    int left = right - 1;
    vector<int> ans = vector<int>(size, 0);
    int index = 0;
    int left_num, right_num;
    while (left >= 0 && right < size) {
        left_num = nums[left];
        right_num = nums[right];
        if (left_num + right_num < 0) {
            ans[index] = right_num * right_num;
            index++;
            right++;
        } else if (left_num + right_num > 0) {
            ans[index] = left_num * left_num;
            index++;
            left--;
        } else {
            ans[index] = right_num * right_num;
            right++;
            index++;
            ans[index] = left_num * left_num;
            left--;
            index++;
        }
    }
    while (left >= 0) {
        left_num = nums[left];
        ans[index] = left_num * left_num;
        left--;
        index++;
    }
    while (right < size) {
        right_num = nums[right];
        ans[index] = right_num * right_num;
        right++;
        index++;
    }
    return ans;
}
