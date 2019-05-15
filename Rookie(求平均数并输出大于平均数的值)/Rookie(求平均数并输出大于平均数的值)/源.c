#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	double sum = 0;
	int num[100];
	int cnt = 0;
	scanf("%d", &x);
	//用数组保存输入的数
	while (x != -1)
	{
		num[cnt] = x;
		//printf("%d\n", num[cnt]);
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	//输出平均数
	if (cnt > 0)
		printf("%lf\n", sum / cnt);
	//遍历数组
	for (int i = 0; i < cnt; i++) {
		if (num[i] > sum / cnt)
			printf("%d\t", num[i]);
	}
	system("pause");
	return 0;
}