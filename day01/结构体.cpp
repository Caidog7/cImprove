
//#define BASIC
#define STRUCT_AND_POINT
#define DEEP_AND_SHALLOW_COPY


#ifdef DEEP_AND_SHALLOW_COPY
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//����˵����ǳ�����Ĳ��
	//��c������ǳ�������ǽ�һ��ָ��ָ����ڴ�ռ�ĵ�ַ����ֵ������һ��ָ�롣
	//��Ȼ�ڴ�ռ��ֵ������ȥ����ʵ���϶���ָ��ͬһ��ַ�������һ��ָ������ͷţ��ڶ���ָ��������������Ϊ��ָ��ռ�ʵ���Ѿ����ͷ�
	//����������ڸ��ڶ���ָ�����һ���ڴ�ռ䣬Ȼ��ԭ���ڴ�ռ��ֵ��ֵ��ȥ���������߾Ͳ����໥Ӱ��
	//��ǳ������Ҫ��������Ҫ������c++�У�c++�����������������ǳ�����У�һ�����Ա������������Ӱ�쿽����ȥ������һ����Ա




	system("pause");
	return EXIT_SUCCESS;
}
#endif // DEEP_AND_SHALLOW_COPY


#ifdef STRUCT_AND_POINT
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//�������ͣ��ṹ�塢�ṹ��ָ�롢�ṹ��ָ������
	//�ṹ���ڲ�Ҳ��һ��ָ�롢����ָ�루�൱��һ��ָ�����飩


	system("pause");
	return EXIT_SUCCESS;
}
#endif // structAndPoint


#ifdef BASIC
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
	(*t4).age = 21;  //(*t4)��t3�ǵȼ۵�
	printStruct(t4);

	//6���ṹ������
	T t5[3] = { "a", 18, "b", 28, "c", 38 };
	for (const auto& a:t5) {
		printf("%s %d\n", a.name, a.age);
	}
	system("pause");
	return EXIT_SUCCESS;
}

void printStruct(pT a) {
	printf("%s, %d\n", a->name, a->age);
}
#endif // basic





