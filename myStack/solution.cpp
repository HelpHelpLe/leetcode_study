#include "solution.h"
#include <cstddef>


MyStack::MyStack() {
    
}

void MyStack::push(int x) {
    std::size_t size = m_queue.size();
    m_queue.push(x);
    for (int i = 0; i < size; ++i) {
        m_queue.push(m_queue.front());
        m_queue.pop();
    }
}

int MyStack::pop() {
    int top = m_queue.front();
    m_queue.pop();
    return top;
}

int MyStack::top() {
    return m_queue.front();
}

bool MyStack::empty() {
    return m_queue.empty();
}
