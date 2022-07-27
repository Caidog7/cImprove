#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define basic


#ifdef basic

//1、struct关键字
//struct Teacher 合在一起类型
//{}后面有分号
struct Teacher {
	char name[50];
	int age;
};

//2、结构体变量定义
//	1 先定义类型，再定义变量
struct Teacher t1;
//	2 定义类型同时定义变量,也可以没有“Student”，只有s1,s2。
struct Student {
	char name[50];
	int age;
}s1,s2 = {"xiaohong",3};

//3、结构体变量初始化
//	定义时直接初始化,或者定义类型定义变量时初始化，如上
struct Teacher t2 = { "xiaoming",18 };

//4、typedef改类型名
typedef struct Teacher2
{
	char name[50];
	int age;
}T,*pT;

struct Teacher2 t5;
T t3 = {"xiaotian", 20}; // 很常用

//5、点运算符和指针法操作结构体
pT t4;
//t4 = &t3;//err 函数体外只能进行全局函数和变量的声明，而无法执行语句或调用函数。

void printStruct(pT a);
int main()
{
	
	//strcpy(t4->name, "xiaotian"); //err,结构体指针没空间就不能赋值
	t4 = &t3;
	printStruct(t4);
	system("pause");
	return EXIT_SUCCESS;
}

void printStruct(pT a) {
	printf("%s, %d\n", a->name, a->age);
}
#endif // basic





