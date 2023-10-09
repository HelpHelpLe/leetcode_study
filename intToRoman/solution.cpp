#include "solution.h"

string Solution::intToRoman(int num)
{
    string roman_char[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int roman_value[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string ans = "";
    int k = 0;
    for (int i = 12; i >=0; i--)
    {
        k = num / roman_value[i];
        num = num - k * roman_value[i];
        while (k--)
        {
            ans += roman_char[i];
        }
    }
    return ans;
}
