#pragma once

#include <vector>
#include <string>

class Solution {
public:
    int findMaxForm(std::vector<std::string>& strs, int m, int n);
private:
    int __get_zero_num(const std::string& str);
};
