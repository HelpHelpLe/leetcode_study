#include <iostream>

#include "solution.h"


using namespace std;


int main() {
    string s = "ab#c";
    string t = "ad#c";
    Solution solution;
    bool ans = solution.backspaceCompare(s, t);
    cout << ans << endl;
    return 0;
}
