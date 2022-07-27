#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
     
   
    const char* a[] = { "aaa","bbb","ccc" }; //指针数组是数组
    char b[10] = { "abc" };
    char(*p)[10];//数组指针是指针，不常用
    p = &b;

    printf("a:0x%x,*a:%s\n",(int)a[0], a[0]);
    printf("q:0x%x,*q:%c,q:0x%x\n", (int)b, b[0], &b[0]);
    printf("q:0x%x,*q:%c,q:0x%x\n", (int)p, p[0], &p[0]);//数组指针输出时需要带(*p)[0]，不能直接p[0]
      

    typedef int(*P)[10];//数组指针类型
    P q;//数组指针变量

    system("pause");
    return EXIT_SUCCESS;
}