#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a;      //告诉编译器，分配4字节
    int b[10];  //分配40个字节
    char c;     //1字节
    char d[10]; //10字节
    double e;   //8字节
    double f[10];   //分配80个字节
    char* g = NULL; 
    int* h = NULL;  //无论是什么类型指针，64位系统中是8字节，32位系统中是4字节。

    int* i; //如果直接给*i赋值则他成为野指针，随机指向内存。 
    /*
    定义指针后初始化为NULL;
    使用前制定一个可用地址；
    引用之前判断是否为NULL；
    使用完后赋值为NULL。*/

    printf("size of int:%d\n", sizeof(a)); printf("size of int array:%d\n", sizeof(b)); printf("size of char:%d\n", sizeof(c));
    printf("size of char array :%d\n", sizeof(d)); printf("size of double:%d\n", sizeof(e)); printf("size of double array:%d\n", sizeof(f));
    printf("size of char point:%d\n", sizeof(g)); printf("size of int point:%d\n", sizeof(h)); printf("size of int undefined point:%d\n\n", sizeof(i));

    printf("b:%d    ", b); printf("&b:%d\n",&b);//b表示b[0]的地址，&b表示数组b[10]的地址
    printf("b+1:%d    ", b+1); printf("&b+1:%d\n\n", &b+1);//二者值相等，但是两者代表数据类型不一样，一个b+1是b[0]大小，而&b+1是b[10]大小。




    system("pause");
    return EXIT_SUCCESS;
}