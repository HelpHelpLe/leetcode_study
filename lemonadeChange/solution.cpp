#include "solution.h"

bool Solution::lemonadeChange(std::vector<int> &bills) {
    int five = 0;
    int ten = 0; 

    for (int i = 0; i < bills.size(); ++i) {
        switch (bills[i]) {
            case 5:
                ++five;
                break;
            case 10:
                if (five < 1) return false;
                --five;
                ++ten;
                break;
            case 20:
                if (ten < 1) {
                    if (five < 3) return false;
                    five -= 3;
                } else {
                    if (five < 1) return false;
                    --ten;
                    --five;
                }
                break;
            default:
                break;
        }
    }
    return true;
}
