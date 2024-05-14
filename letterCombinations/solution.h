#pragma once

#include <array>
#include <vector>
#include <string>

class Solution {
public:
    Solution();

public:
    void back_tracking(int index, std::string path, std::vector<std::string> &res);
    std::vector<std::string> letterCombinations(std::string digits);
private:
    std::array<std::string, 10> digit_letter;
    std::string m_digits;
};
