#ifndef LinkedList_h
#define LinkedList_h
#include <cstddef>

class Node
{
public:
    int info;   // to store data
    Node *next; // to point to next node

    Node(int d) : info(d), next(NULL){};

    ~Node() {} // default deconstructor
};

class LinkedList
{
public:
    LinkedList() {}
    ~LinkedList() {}

    Node *head = NULL;

    bool isEmpty();
    void addToHead(int val);
    int removeFromHead();
};
#endif
