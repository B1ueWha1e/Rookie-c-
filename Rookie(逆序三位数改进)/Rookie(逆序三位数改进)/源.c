#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int a, b, c;
	scanf("%d", &n);
	a = n / 100;
	b = n % 100 / 10;
	c = n % 10;
	printf("%d", c * 100 + b * 10 + a);
	system("pause");
	return 0;
}