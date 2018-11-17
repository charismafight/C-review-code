#include<stdio.h>

void main()
{
    int a=1000,b=2000;
    int *va,*vb;

    //把指针指向具体变量
    va=&a,vb=&b;
    printf("a:%d",a);
    printf("b:%d",b);

    printf("va:",*va);
    printf("vb:",*vb);

    a=1100;
}