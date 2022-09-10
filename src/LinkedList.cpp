#include "LinkedList.h"
#include <iostream>

bool LinkedList::isEmpty()
{
    if (head == NULL)
    {
        // std::cout << "The LinkedList Stack is empty" << std::endl;
        return true;
    }
    // std::cout << "The LinkedList Stack is not empty\n";
    return false;
}

void LinkedList::addToHead(int val)
{
    Node *nnode = new Node(val);
    nnode->next = head;
    head = nnode;
    std::cout << val << " Added to Stack successfully\n";
}

int LinkedList::removeFromHead()
{
    if (head == NULL) // if empty doesnot do anything
    {
        return -1;
    }
    Node *tobedeleted = head;
    int temp = head->info;
    head = head->next;
    delete tobedeleted;
    return temp;
}
