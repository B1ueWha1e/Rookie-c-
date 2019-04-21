#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int j;
	int N;
	scanf("%d", &N);
	for (i = 1; i <= N;i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d", j, i, j*i);
			if (j*i < 10) {
				printf("   ");
			}
			else printf("  ");
			if (i == j)
				printf("\n");
		}
	}

	system("pause");
	return 0;

}