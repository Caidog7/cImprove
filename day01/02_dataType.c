#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a;      //���߱�����������4�ֽ�
    int b[10];  //����40���ֽ�
    char c;     //1�ֽ�
    char d[10]; //10�ֽ�
    double e;   //8�ֽ�
    double f[10];   //����80���ֽ�
    char* g = NULL; 
    int* h = NULL;  //������ʲô����ָ�룬64λϵͳ����8�ֽڣ�32λϵͳ����4�ֽڡ�

    int* i; //���ֱ�Ӹ�*i��ֵ������ΪҰָ�룬���ָ���ڴ档 
    /*
    ����ָ����ʼ��ΪNULL;
    ʹ��ǰ�ƶ�һ�����õ�ַ��
    ����֮ǰ�ж��Ƿ�ΪNULL��
    ʹ�����ֵΪNULL��*/

    printf("size of int:%d\n", sizeof(a)); printf("size of int array:%d\n", sizeof(b)); printf("size of char:%d\n", sizeof(c));
    printf("size of char array :%d\n", sizeof(d)); printf("size of double:%d\n", sizeof(e)); printf("size of double array:%d\n", sizeof(f));
    printf("size of char point:%d\n", sizeof(g)); printf("size of int point:%d\n", sizeof(h)); printf("size of int undefined point:%d\n\n", sizeof(i));

    printf("b:%d    ", b); printf("&b:%d\n",&b);//b��ʾb[0]�ĵ�ַ��&b��ʾ����b[10]�ĵ�ַ
    printf("b+1:%d    ", b+1); printf("&b+1:%d\n\n", &b+1);//����ֵ��ȣ��������ߴ����������Ͳ�һ����һ��b+1��b[0]��С����&b+1��b[10]��С��




    system("pause");
    return EXIT_SUCCESS;
}