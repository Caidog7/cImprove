#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int(*P)[4];//数组指针类型

void printArray(P a){//不能传参int **a因为**a 与(*a)[4]指针步长不一样，i加一时，地址变化二者会不同
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	int a[3][4] = {
		1,2,3,4,
		5,6,7,8,
		9,10,11,12
	};
	//&a:代表二维数组的首地址
	//a:代表第0行首地址
	//a+i:代表第i行首地址
	//*(a+i)+j,第i行第j列元素地址，注意这里还是地址
	//*(*(a+i)+j),第i行第j列元素，这里才是元素值
	printArray(a);

	int n = sizeof(a) / sizeof(a[0]);//表示二维数组行数
	int nn = sizeof(a) / sizeof(a[0][0]); //表示二维数组总个数


	system("pause");
	return EXIT_SUCCESS;
}