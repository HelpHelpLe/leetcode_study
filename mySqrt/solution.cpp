#include "solution.h"


int Solution::mySqrt(int x) {
    if (x == 0) {
        return 0;
    }
    int low = 1;
    int high = x;
    int mid = 1;
    while (low <= high) {
        mid = low + ((high - low) >> 1);
        if (x / mid < mid) {
            high = mid - 1;
        } else if (x / (mid + 1) > (mid + 1)) {
            low = mid + 1;
        } else {
            if ((mid + 1) == x / (mid + 1)) {
                return mid + 1;
            }
            return mid;
        }
    }
    return -1;
}
