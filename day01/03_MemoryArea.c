#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_str1_global()
{
	char* p = "abcdef1"; //文字常量区

	return p;
}

char* get_str2_global()
{
	char* q = "abcdef1"; //文字常量区

	return q;
}


char* get_str_stack()
{
	char str[] = "abcdedsgads"; //栈区，
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
	//全局区分析
	char* p = NULL;
	char* q = NULL;

	p = get_str1_global();
	//%s： 指针指向内存区域的内容
	//%d: 打印p本身的值
	printf("***************global area***************\n");
	printf("p = %s， p = %d\n", p, p);

	q = get_str2_global();
	printf("q = %s， q = %d\n", q, q);

	printf("\n");
	printf("************stack&heap area************\n");
	//堆栈区分析
		char buf[128] = { 0 };

		//strcpy(buf, get_str_stack());//在strcpy拷贝完成后才会释放get_str_stack函数的栈区内存
		//printf("buf = %s\n", buf); 
		p = NULL;
		p = get_str_stack();
		printf("p = %s\n", p);//乱码，不确定

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
		//静态变量分析
		int* a = getA_static();
		printf("a:%d  ",*a);
		getA_static();
		printf("a:%d", *a);



	printf("\n");
	system("pause");
	return 0;
}