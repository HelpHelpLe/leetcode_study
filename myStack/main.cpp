#include <iostream>

#include "solution.h"

int main() {

    MyStack stack;
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto a : arr) {
        stack.push(a);
    }

    while (!stack.empty()) {
        std::cout << stack.pop() << std::endl;
    }

    return 0;
}
