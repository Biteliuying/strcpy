#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char a[12]="one";
	char b[] = "bbtwo";
	printf("%s\n", a);
	strcpy(a,b);//b值放到a中
	printf("%s\n", a);
	strcat(a, b);
	printf("a为：%s\n", a);
	printf("%s\n", b);
	len = strlen(a);
	printf("a：%s中有%d个字符长度", a,len);
}