#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char a[12]="one";
	char b[] = "bbtwo";
	printf("%s\n", a);
	strcpy(a,b);//bֵ�ŵ�a��
	printf("%s\n", a);
	strcat(a, b);
	printf("aΪ��%s\n", a);
	printf("%s\n", b);
	len = strlen(a);
	printf("a��%s����%d���ַ�����", a,len);
}