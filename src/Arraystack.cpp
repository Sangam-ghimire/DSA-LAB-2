#include"Arraystack.h"
#include<iostream>


void Arraystack::push(int item)
{
    if ( topp >= (MAX-1) )
    {
        std::cout<<"Stack Overflow"<<std::endl;
    }else
    {
        topp++;
        arr[topp] = item;
        std::cout<<item<<"pushed successfully"<<std::endl;
    }

}

int Arraystack::pop()
{
    if(topp<0)
    {
        std::cout<<"stack underflow";
    }else
    {
        int topitem = arr[topp];
        topp--;
        return topitem;
    }
}

int Arraystack::top()
{
    if(topp<0)
    {
        std::cout<<"Empty Stack";
        return 0;
    }else
    {
        int x = arr[topp];
        return x;
    }
}

bool Arraystack::isEmpty()
{
   if(topp<0) return true;
   return false;
}

bool Arraystack::isFull() 
{
    if ( topp >= (MAX-1) )
    {
        std::cout<<"Stack Overflow"<<std::endl;
    }
}