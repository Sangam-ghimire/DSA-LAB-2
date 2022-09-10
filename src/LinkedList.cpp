#include "LinkedList.h"
#include <iostream>

bool LinkedList::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

void LinkedList::addToHead(int val)
{
    Node *nnode = new Node(val);
    nnode->next = head;
    head = nnode;
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
