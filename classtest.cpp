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
void father::testconst(const int c_first)
{
    cout<<"常量输出："<<c_first<<std::endl;
}
void testconst()
{
    double a=3.14;
    const double b=a;
    cout<<"双精度常数赋值，被拷贝可不为常量"<<b;
    const int c=a;
    cout<<"整型常量赋值，被拷贝值可不为整型"<<c;
    cout<<std::endl;
    cout<<c;
}
int main(void)
{
    son son1;
    father father1;
    const int tmp=1;
    father1.test();
    son1.test();
    father1.testconst(1);
    son1.testconst(1);
    testconst();
    return 0;
}