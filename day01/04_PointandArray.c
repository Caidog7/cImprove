#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char buf1[20];
    buf1[0] = 'a';
    buf1[1] = 'd';
    //buf1[19] = '\0';
    // 
    //char buf2[];//err
    char buf2[]="ad";//实际赋值为'a''d''\0'三个字符
                    //字符数组在定义时需首先确定大小，且最后一位为\0结束符。
    printf("strlen = %d, sizeof = %d\n", strlen(buf2), sizeof(buf2));//sizeof的值要比strlen的值大1，因为strlen不计算\0字符,而sizeof会计算所有\0字符。
    char buf4[100] = { 0 };
    printf("buf4 strlen = %d, buf4 sizeof = %d\n", strlen(buf4), sizeof(buf4)); //strlen:0 sizeof:100
    //buf2[2] = '0';
    //buf2[3] = '0';

    printf("buf2:%s,buf2:%d\n", buf2, buf2);
    printf("buf1:%s\n", buf1);//数组输出如果没有\0就会一直输出下去

    char* p;// = "ad";//如果使用字符直接赋值会放在字符常量区，不发更改
    char buf3[20] = "adcd";
    p = buf3;
    printf("p:%s,p:%d\n", p, p);

    //char* q=NULL;
    //*q = "ad";//不能写入,此时q为空指针，*q表示给q地址上的内存赋值，可以使用q = &"ad"赋值，这是给q赋值，可以写入。
    //printf("q:%s,q:%d\n", q, q);

    //char* q = "ad";
    //printf("q:%s,q:%d\n", q, q);

    *(p + 3) = 'b';
    printf("p:%s,p:%d\n", p, p + 3);
    *(p + 4) = 'b';
    printf("p:%s,p:%d\n", p, p+4);//所有的字符串输出都看\0符号，到\0符号后就停止输出。
    * ((int*)p + 1) = 'b';
    printf("p:%s,p:%d\n", p, (int*)p + 1);


    //空指针
    //char* q=NULL;
    //*q = "ad";//不能写入,此时q为空指针，*q表示给q地址上的内存赋值，可以使用q = &"ad"赋值，这是给q赋值，可以写入。
    //printf("q:%s,q:%d\n", q, q);

    //野指针
    //char* q;//野指针是指初始化的时候q内数据随机，也就是指向*q内容的地址随机，而&q是在栈内，不是野指针可以给q赋值
    //*q = "ad";//而为了避免野指针的危害在不用q时应该给其赋值NULL使其变为空指针



    system("pause");
    return EXIT_SUCCESS;
}