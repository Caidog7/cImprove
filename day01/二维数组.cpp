#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int(*P)[4];//����ָ������

void printArray(P a){//���ܴ���int **a��Ϊ**a ��(*a)[4]ָ�벽����һ����i��һʱ����ַ�仯���߻᲻ͬ
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
	//&a:�����ά������׵�ַ
	//a:�����0���׵�ַ
	//a+i:�����i���׵�ַ
	//*(a+i)+j,��i�е�j��Ԫ�ص�ַ��ע�����ﻹ�ǵ�ַ
	//*(*(a+i)+j),��i�е�j��Ԫ�أ��������Ԫ��ֵ
	printArray(a);

	int n = sizeof(a) / sizeof(a[0]);//��ʾ��ά��������
	int nn = sizeof(a) / sizeof(a[0][0]); //��ʾ��ά�����ܸ���


	system("pause");
	return EXIT_SUCCESS;
}