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
    char buf2[]="ad";//ʵ�ʸ�ֵΪ'a''d''\0'�����ַ�
                    //�ַ������ڶ���ʱ������ȷ����С�������һλΪ\0��������
    printf("strlen = %d, sizeof = %d\n", strlen(buf2), sizeof(buf2));//sizeof��ֵҪ��strlen��ֵ��1����Ϊstrlen������\0�ַ�,��sizeof���������\0�ַ���
    char buf4[100] = { 0 };
    printf("buf4 strlen = %d, buf4 sizeof = %d\n", strlen(buf4), sizeof(buf4)); //strlen:0 sizeof:100
    //buf2[2] = '0';
    //buf2[3] = '0';

    printf("buf2:%s,buf2:%d\n", buf2, buf2);
    printf("buf1:%s\n", buf1);//����������û��\0�ͻ�һֱ�����ȥ

    char* p;// = "ad";//���ʹ���ַ�ֱ�Ӹ�ֵ������ַ�����������������
    char buf3[20] = "adcd";
    p = buf3;
    printf("p:%s,p:%d\n", p, p);

    //char* q=NULL;
    //*q = "ad";//����д��,��ʱqΪ��ָ�룬*q��ʾ��q��ַ�ϵ��ڴ渳ֵ������ʹ��q = &"ad"��ֵ�����Ǹ�q��ֵ������д�롣
    //printf("q:%s,q:%d\n", q, q);

    //char* q = "ad";
    //printf("q:%s,q:%d\n", q, q);

    *(p + 3) = 'b';
    printf("p:%s,p:%d\n", p, p + 3);
    *(p + 4) = 'b';
    printf("p:%s,p:%d\n", p, p+4);//���е��ַ����������\0���ţ���\0���ź��ֹͣ�����
    * ((int*)p + 1) = 'b';
    printf("p:%s,p:%d\n", p, (int*)p + 1);


    //��ָ��
    //char* q=NULL;
    //*q = "ad";//����д��,��ʱqΪ��ָ�룬*q��ʾ��q��ַ�ϵ��ڴ渳ֵ������ʹ��q = &"ad"��ֵ�����Ǹ�q��ֵ������д�롣
    //printf("q:%s,q:%d\n", q, q);

    //Ұָ��
    //char* q;//Ұָ����ָ��ʼ����ʱ��q�����������Ҳ����ָ��*q���ݵĵ�ַ�������&q����ջ�ڣ�����Ұָ����Ը�q��ֵ
    //*q = "ad";//��Ϊ�˱���Ұָ���Σ���ڲ���qʱӦ�ø��丳ֵNULLʹ���Ϊ��ָ��



    system("pause");
    return EXIT_SUCCESS;
}