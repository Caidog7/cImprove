#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef unsigned int u32;

//typedef 主要和结构体结合使用

struct MyStruct1
{
    int a;
    int* b;
};
//  
typedef struct MyStruct2
{
    int a;
    int* b;
}M2;

int main()
{
    struct MyStruct1 m1;
    //MyStruct1 m1; //err,定义结构体一定要加上struct

    M2 m2;


    system("pause");
    return EXIT_SUCCESS;
}