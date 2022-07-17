#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_str1_global()
{
	char* p = "abcdef1"; //���ֳ�����

	return p;
}

char* get_str2_global()
{
	char* q = "abcdef1"; //���ֳ�����

	return q;
}


char* get_str_stack()
{
	char str[] = "abcdedsgads"; //ջ����
	printf("str = %s\n", str);

	return str;
}

char* get_str2_heap()
{
	char* tmp = (char*)malloc(100);
	if (tmp == NULL)
	{
		return NULL;
	}

	strcpy(tmp, "adsagldsjglk");

	return tmp;
}
int* getA_static()
{
	static int a = 10;
	a = a + 1;
	return &a;
}


int main(void)
{
	//ȫ��������
	char* p = NULL;
	char* q = NULL;

	p = get_str1_global();
	//%s�� ָ��ָ���ڴ����������
	//%d: ��ӡp�����ֵ
	printf("***************global area***************\n");
	printf("p = %s�� p = %d\n", p, p);

	q = get_str2_global();
	printf("q = %s�� q = %d\n", q, q);

	printf("\n");
	printf("************stack&heap area************\n");
	//��ջ������
		char buf[128] = { 0 };

		//strcpy(buf, get_str_stack());//��strcpy������ɺ�Ż��ͷ�get_str_stack������ջ���ڴ�
		//printf("buf = %s\n", buf); 
		p = NULL;
		p = get_str_stack();
		printf("p = %s\n", p);//���룬��ȷ��

		p = NULL;
		p = get_str2_heap();
		if (p != NULL)
		{
			printf("p = %s\n", p);

			free(p);
			printf("p = %s\n", p);
			p = NULL;

			if (p != NULL)
			{
				free(p);
			}

		}

		printf("\n");
		printf("************static************\n");
		//��̬��������
		int* a = getA_static();
		printf("a:%d  ",*a);
		getA_static();
		printf("a:%d", *a);



	printf("\n");
	system("pause");
	return 0;
}