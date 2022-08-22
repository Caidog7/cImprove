
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
	//举例说明深浅拷贝的差别
	//在c语言中浅拷贝就是将一个指针指向的内存空间的地址，赋值给另外一个指针。
	//虽然内存空间的值拷贝过去，但实际上二者指向同一地址，如果第一个指针变量释放，第二个指针变量将会出错，因为其指向空间实际已经被释放
	//深拷贝就是我在给第二个指针分配一个内存空间，然后原来内存空间的值赋值过去，这样二者就不会相互影响
	//深浅拷贝主要的问题主要出现在c++中，c++的类会有析构函数，浅拷贝中，一个类成员的析构函数会影响拷贝过去的另外一个成员




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
	//三种类型：结构体、结构体指针、结构体指针数组
	//结构体内部也有一级指针、二级指针（相当于一级指针数组）


	system("pause");
	return EXIT_SUCCESS;
}
#endif // structAndPoint


#ifdef BASIC
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
	(*t4).age = 21;  //(*t4)与t3是等价的
	printStruct(t4);

	//6、结构体数组
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





