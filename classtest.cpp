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
void testconst()
{
    double a=3.14;
    const double b=a;
    cout<<"˫���ȳ�����ֵ��������ֵ�ɲ�Ϊ����"<<b;
    const int c=a;
    cout<<"���ͳ�����ֵ��������ֵ�ɲ�Ϊ����"<<c;
    cout<<std::endl;
    cout<<c;
}
int main(void)
{
    son son1;
    father father1;
   father1.test();
    son1.test();
    testconst();
    return 0;
}