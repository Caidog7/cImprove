#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
     
   
    const char* a[] = { "aaa","bbb","ccc" }; //ָ������������
    char b[10] = { "abc" };
    char(*p)[10];//����ָ����ָ�룬������
    p = &b;

    printf("a:0x%x,*a:%s\n",(int)a[0], a[0]);
    printf("q:0x%x,*q:%c,q:0x%x\n", (int)b, b[0], &b[0]);
    printf("q:0x%x,*q:%c,q:0x%x\n", (int)p, p[0], &p[0]);//����ָ�����ʱ��Ҫ��(*p)[0]������ֱ��p[0]
      

    typedef int(*P)[10];//����ָ������
    P q;//����ָ�����

    system("pause");
    return EXIT_SUCCESS;
}