#include "solution.h"

string& trim(string&);

int Solution::myAtoi(string s)
{
    // s = "-00123"
    s = trim(s);
    int i = 0;
    int ans = 0;
    if (s[i] == '-')
    {
        while (i < s.size() - 1)
        {
            i++;
            if (s[i] < '0' || s[i] > '9')
                return ans;
            ans *= 10;
            if (ans > 0)
                return 0x80000000;
            ans -= s[i] - '0';
            if (ans > 0)
                return 0x80000000;
        }
    }
    else if(s[i] == '+')
    {
        while (i < s.size() - 1)
        {
            i++;
            if (s[i] < '0' || s[i] > '9')
                return ans;
            ans *= 10;
            if (ans < 0)
                return 0x7fffffff;
            ans += s[i] - '0';
            if (ans < 0)
                return 0x7fffffff;
        }
    }
    else
    {
        while (i < s.size())
        {
            if (s[i] < '0' || s[i] > '9')
                return ans;
            ans *= 10;
            if (ans < 0)
                return 0x7fffffff;
            ans += s[i++] - '0';
            if (ans < 0)
                return 0x7fffffff;
        }
    }
    return ans;
}

string& trim(string& s)
{
    if (s.empty())
        return s;
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}
