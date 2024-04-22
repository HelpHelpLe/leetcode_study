#include <iostream>

#include "solution.h"

using namespace std;


int main() {
    string s = "bb";

    vector<string> wordDict{"a","b","bbb","bbbb"};

    Solution solution;

    bool ans = solution.wordBreak(s, wordDict);
    
    cout << ans << endl;

    return 0;
}
