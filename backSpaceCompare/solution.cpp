#include "solution.h"


bool Solution::backspaceCompare(string s, string t) {
    int slow = 0;
    int fast = 0;
    int sizes = s.size();
    int sizet = t.size();
    while (fast < sizes) {
        if (s[fast] == '#') {
            if (slow > 0) {
                slow--;
            }
        } else {
            s[slow] = s[fast];
            slow++;
        }
        fast++;
    }
    sizes = slow;
    slow = fast = 0;
    while (fast < sizet) {
        if (t[fast] == '#') {
            if (slow > 0) {
                slow--;
            }
        } else {
            t[slow] = t[fast];
            slow++;
        }
        fast++;
    }
    sizet = slow; 
    if (sizes != sizet) {
        return false;
    }
    slow = 0;
    while (slow < sizes) {
        if (s[slow] != t[slow]) {
            return false;
        }
        slow++;
    }
    return true;
}
