#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef unsigned int u32;

//typedef ��Ҫ�ͽṹ����ʹ��

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
    //MyStruct1 m1; //err,����ṹ��һ��Ҫ����struct

    M2 m2;


    system("pause");
    return EXIT_SUCCESS;
}