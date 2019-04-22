#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
    scanf_s("%d", &a);

	if (a%10 == 0) {
		if (a%100/10 == 0) {
			b = a/100;
		}
		else {
			b = a % 100 / 10 * 10 + a / 100;
		}
	}
	else {
		b = a % 10 * 100 + a % 100 / 10 * 10 + a / 100;
	}
	printf("%d", b);
	system("pause");
	return 0;

}