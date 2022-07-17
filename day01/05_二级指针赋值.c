#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fun(char* p,int* len) {
    if (*p = NULL) {
        return;
    }
    strcpy(p, "abc");
}
void fun1(char** p, int* len) {
    if (p == NULL) {
        return 0;
    }
    char* temp = NULL;
    temp = (char*)malloc(100);
    //char* temp = (char*)malloc(100);
    strcpy(temp, "bcd");
    *p = temp;
}

int main()
{
    char buf[] = "123";
    char buf2[] = "123";
    int len = 0;
    char* q = NULL;
    fun(buf, &len);
    fun1(&q, &len);
    //fun1(&buf2, &len);

    printf("buf:%s,buf:%d\n", buf, buf);
    printf("q:%s,q:%d\n", q, q);
    //printf("buf2:%s,buf2:%d", buf2, buf2);
    free(q);
    q = NULL;

    system("pause");
    return EXIT_SUCCESS;
}