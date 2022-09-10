#pragma once

class stack
{
public:
    stack() {}
    ~stack() {}
    virtual void push(int item) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};
