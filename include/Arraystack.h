#pragma once
#include "stack.h"
#include <iostream>

#define MAX 100
class Arraystack : public stack
{
public:
    int topp = -1;

    Arraystack() {}
    ~Arraystack() {}

    int arr[MAX];

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
};