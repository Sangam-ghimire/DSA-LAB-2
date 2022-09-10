#pragma once
#include <iostream>
#include "LinkedList.h"
#include "stack.h"

class LinkedListStack : public stack
{
public:
    LinkedListStack() {}
    ~LinkedListStack() {}

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isFull() { return false; }
    LinkedList L;
};
