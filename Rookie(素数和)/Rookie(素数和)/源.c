#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	scanf("%d%d", &n,&m);
	int num=0;
	int i;
	int j = 2;
	int count = 1;
	if (n == 1) {
		num = 2;
	}
	for (i = 3; i < 2000; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j) {
			count++;
			if (count >= n && count <= m)
				num += i;
		}		
	}
	printf("%d", num);	
	system("pause");
	return 0;
}