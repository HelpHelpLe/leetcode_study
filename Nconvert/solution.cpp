#include "solution.h"
#include <string>

string Solution::convert(string s, int numRows)
{
    if (numRows == 1)
    {
        return s;
    }
    int dis1 = 2 * (numRows - 1);
    int dis2 = 0;
    string ans = s;
    unsigned int cnt = 0;
    bool flag;
    for (int j = 0; j < numRows; j++)
    {
        flag = false;
        for (int i = j; i < s.size();)
        {
            ans[cnt] = s[i];
            cnt++;
            if (dis1 && dis2)
            {
                i = (flag ? i + dis2 : i + dis1);
                flag = !flag;
            }
            else
            {
                if (dis1)
                {
                    i = i + dis1;
                }
                else if (dis2)
                {
                    i = i + dis2;
                }
            }
        }
        dis1 -= 2;
        dis2 += 2;
    }
    return ans;
}
