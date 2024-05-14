#pragma once

#include <vector>
#include <string>

class Solution {
public:
    bool is_palindrome(const std::string &s);

    void back_tracking(int index, std::vector<std::string> &path, std::vector<std::vector<std::string>> &res);

    std::vector<std::vector<std::string>> partition(std::string s);

private:
    std::string m_s;
};
