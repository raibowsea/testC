#include<iostream>
#include "classtest.h"
using std::cout;
void son::test()
{
    cout<<"this is son";
}
void father::test()
{
    cout<<"this is f";
}
int main(void)
{
    son son1;
    father father1;
   father1.test();
    son1.test();
    return 0;
}