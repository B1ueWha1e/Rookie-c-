#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	scanf("%d/%d",&a,&b);
	printf("0.");
	int cnt = 0;
	while (a != 0) {
		int t = a * 10 / b;
		a = a * 10 % b;
		printf("%d", t);
		cnt++;
		if (cnt == 200)
			break;
	}
	system("pause");
	return 0;
}