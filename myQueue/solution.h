#pragma once

#include <stack>

class MyQueue {
public:
    MyQueue();
    
    void push(int x);
    
    int pop();
    
    int peek();
    
    bool empty();

private:
    void in2out();

private:
    std::stack<int> m_stack_in;
    std::stack<int> m_stack_out;
};
