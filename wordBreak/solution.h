#pragma once

#include <vector>
#include <string>

class Solution {
public:
    bool wordBreak(std::string s, std::vector<std::string>& wordDict);
    bool wordBreak(const std::string& s, std::vector<std::string>& wordDict, int i, int j);
};
