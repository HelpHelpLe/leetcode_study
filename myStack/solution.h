#pragma once


#include <queue>

class MyStack {
public:
    MyStack();
    
    void push(int x);
    
    int pop();
    
    int top();
    
    bool empty();

private:
    std::queue<int> m_queue;
};
