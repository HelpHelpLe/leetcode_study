#include "solution.h"
#include <algorithm>

std::vector<std::vector<int>> Solution::reconstructQueue(std::vector<std::vector<int>> &people) {
    std::sort(
        people.begin(), people.end(),
        [](const std::vector<int> &v1, const std::vector<int> &v2) -> bool { 
            if (v1[0] == v2[0]) {
                return v1[1] < v2[1];
            }
            return v1[0] > v2[0];
        });

    for (int i = 0; i < people.size(); ++i) {
        auto t = people[i];
        int pos = people[i][1];
        people.erase(people.begin() + i);
        people.insert(people.begin() + pos, t);
    }

    return people;
}
