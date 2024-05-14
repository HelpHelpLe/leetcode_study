#include "solution.h"


void Solution::back_tracking(int index, int level, std::string ip, std::vector<std::string> &res) {
    if (level > 4)
        return;

    std::size_t size = m_s.size();
    if (index == size && level == 4) {
        res.emplace_back(ip);
        return;
    }

    int len = 3;

    if (len > size - index) {
        len = size - index;
    }
    
    for (int l = 1; l <= len; ++l) {
        std::string s = m_s.substr(index, l);
        if (l > 1 && s[0] == '0')
            break;
        if (l == 3) {
            int n = std::stoi(s);
            if (n > 255) break;
        }
        if (!ip.empty()) {
            s = "." + s;
        }
        back_tracking(index + l, level + 1, ip + s, res);
    }
}

std::vector<std::string> Solution::restoreIpAddresses(std::string s) {
    if (s.size() > 12)
        return {};
    m_s = s;
    std::string ip;
    std::vector<std::string> res;
    back_tracking(0, 0, ip, res);
    return res;
}
