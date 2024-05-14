#include "solution.h"


MyQueue::MyQueue() {
    
}

void MyQueue::push(int x) {
    m_stack_in.push(x);
}

int MyQueue::pop() {
    if (m_stack_out.empty()) {
        in2out();
    }
    int peek = m_stack_out.top();
    m_stack_out.pop();
    return peek;
}

int MyQueue::peek() {
    if (m_stack_out.empty()) {
        in2out();
    }
    return m_stack_out.top();
}

bool MyQueue::empty() {
    return m_stack_out.empty() && m_stack_in.empty();
}

void MyQueue::in2out() {
    while (!m_stack_in.empty()) {
        m_stack_out.push(m_stack_in.top());
        m_stack_in.pop();
    }
}
