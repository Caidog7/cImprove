#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define basic


#ifdef basic

//1��struct�ؼ���
//struct Teacher ����һ������
//{}�����зֺ�
struct Teacher {
	char name[50];
	int age;
};

//2���ṹ���������
//	1 �ȶ������ͣ��ٶ������
struct Teacher t1;
//	2 ��������ͬʱ�������,Ҳ����û�С�Student����ֻ��s1,s2��
struct Student {
	char name[50];
	int age;
}s1,s2 = {"xiaohong",3};

//3���ṹ�������ʼ��
//	����ʱֱ�ӳ�ʼ��,���߶������Ͷ������ʱ��ʼ��������
struct Teacher t2 = { "xiaoming",18 };

//4��typedef��������
typedef struct Teacher2
{
	char name[50];
	int age;
}T,*pT;

struct Teacher2 t5;
T t3 = {"xiaotian", 20}; // �ܳ���

//5�����������ָ�뷨�����ṹ��
pT t4;
//t4 = &t3;//err ��������ֻ�ܽ���ȫ�ֺ����ͱ��������������޷�ִ��������ú�����

void printStruct(pT a);
int main()
{
	
	//strcpy(t4->name, "xiaotian"); //err,�ṹ��ָ��û�ռ�Ͳ��ܸ�ֵ
	t4 = &t3;
	printStruct(t4);
	system("pause");
	return EXIT_SUCCESS;
}

void printStruct(pT a) {
	printf("%s, %d\n", a->name, a->age);
}
#endif // basic





