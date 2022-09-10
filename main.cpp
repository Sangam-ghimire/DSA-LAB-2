#include "LinkedList.h"
#include "LinkedListStack.h"
#include "Arraystack.h"

int main()
{
    LinkedListStack *LL = new LinkedListStack();
    std::cout << LL->isEmpty() << std::endl;

    LL->push(5);
    std::cout << LL->pop();

    Arraystack *AS = new Arraystack();
    std::cout << AS->isEmpty();
}