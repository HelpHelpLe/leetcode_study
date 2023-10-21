#include "solution.h"


string Solution::countAndSay(int n)
{
    if (n == 1)
        return "1";
    string last_str = this->countAndSay(n - 1);
    last_str += '#';
    char cur = last_str[0], tmp;
    int m = last_str.size();
    int cnt = 1;
    string ans = "";
    for (int i = 1; i < m; i++)
    {
        if (cur != last_str[i])
        {
            tmp = cnt + '0';
            ans += tmp;
            ans += cur;
            cur = last_str[i];
            cnt = 1;
        }
        else
            cnt++;
    }
    return ans;
}
