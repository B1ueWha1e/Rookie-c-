#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。");
		do {
			printf("请输入你想的数字：");
			scanf("%d", &a);
			count++;
			if (a > number) {
				printf("你猜的数大了");
			}
			else if (a < number) {
				printf("你猜的数小了");
				}
		} while (a != number);
		printf("恭喜你猜对了！你一共猜了%d次。\n", count);
	system("pause");
	return 0;
}