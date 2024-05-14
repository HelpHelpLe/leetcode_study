#include <iostream>

#include "solution.h"

int main () {

    MyQueue queue;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for (auto a : arr) {
        queue.push(a);
    }

    while (!queue.empty()) {
        std::cout << queue.pop() << std::endl;
    }

    return 0;
}
