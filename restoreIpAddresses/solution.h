#pragma once

#include <vector>
#include <string>

class Solution {
public:
    void back_tracking(int index, int level, std::string ip, std::vector<std::string> &res);
    std::vector<std::string> restoreIpAddresses(std::string s);
private:
    std::string m_s;
};
