#include "LinkedListStack.h"
#include <iostream>

void LinkedListStack::push(int item)
{
    L.addToHead(item);
}

bool LinkedListStack::isEmpty()
{
    return L.isEmpty();
}
int LinkedListStack::top()
{
    return L.head->info;
}
int LinkedListStack::pop()
{
    return L.removeFromHead();
}
