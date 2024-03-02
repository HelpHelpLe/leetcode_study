#include "solution.h"


bool Solution::isPerfectSquare(int num) {
    int low = 1;
    int high = num;
    int mid = 1;
    while (low <= high) {
        mid = low + ((high - low) >> 1);
        if (num /mid < mid) {
            high = mid - 1;
        } else if (num / (mid + 1) > (mid + 1)) {
            low = mid + + 1;
        } else {
            break;
        }
    }
    int tmp = num;
    int tmp1 = num;
    for (int i = 1; i <= mid; i++) {
        tmp -= mid;
    }
    for (int i = 1; i <= mid + 1; i++) {
        tmp1 -= (mid + 1);
    }
    if (tmp == 0 || tmp1 == 0) {
        return true;
    }
    return false;
}
