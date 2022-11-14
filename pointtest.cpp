#include<iostream>
#include"pointtest.h"
#include<string.h>
//指针赋值
void testpoint(){
    pointtest* Cpoint=new pointtest();
    *(Cpoint->pint)=3;
    //*(Cpoint->pchar)="head";
    //std::cout<<*(Cpoint->pint);
    //strcpy(Cpoint->pchar,"head");
}
//结论：没有申请内存的指针无法进行赋值。