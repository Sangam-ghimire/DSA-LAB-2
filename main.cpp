#include "LinkedList.h"
#include "LinkedListStack.h"
#include "Arraystack.h"

int main()
{
    LinkedListStack *LL = new LinkedListStack();
    LL->isEmpty() ? std::cout << "The LinedList Stack is empty\n" : std::cout << "The LinkedList Stack is not empty\n";
    LL->push(5);
    LL->isEmpty() ? std::cout << "The LinedList Stack is empty\n" : std::cout << "The LinkedList Stack is not empty\n";
    LL->push(6);
    std::cout << "The popped element is " << LL->pop();
    LL->push(7);
    LL->push(9);
    std::cout << "The popped element is " << LL->pop() << std::endl;
    std::cout << "The element that will be popped is " << LL->top() << std::endl;
    std::cout << "The popped element is " << LL->pop() << std::endl;

    Arraystack *AS = new Arraystack();
    AS->isEmpty() ? std::cout << "The Array Stack is empty\n" : std::cout << "The Array Stack is not empty\n";
    AS->push(5);
    AS->push(8);
    AS->push(7);
    AS->push(1);
    AS->isEmpty() ? std::cout << "The Array Stack is empty\n" : std::cout << "The Array Stack is not empty\n";
    std::cout << "The popped element is " << AS->pop() << std::endl;
    std::cout << "The element that will be popped is " << AS->top() << std::endl;
    std::cout << "The popped element is " << AS->pop() << std::endl;
    AS->isFull() ? std::cout << "The Array Stack is FULL\n" : std::cout << "The Array Stack is not FULL\n";
}