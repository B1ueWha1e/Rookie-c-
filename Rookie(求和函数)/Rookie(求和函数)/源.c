#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sum(int begin, int end);

int main() {
	int begin, end;
	scanf("%d%d", &begin, &end);
	sum(begin,end);
	system("pause");
	return 0;
}

void sum(int begin, int end)
{
	int i;
	int sum = 0;
	for (i = begin; i <= end; i++) {
		sum += i;
		printf("%d\t%d\n",i,sum);
	}
	printf("%d", sum);
}