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
	printf("���Ѿ������һ��1��100֮�������");
		do {
			printf("��������������֣�");
			scanf("%d", &a);
			count++;
			if (a > number) {
				printf("��µ�������");
			}
			else if (a < number) {
				printf("��µ���С��");
				}
		} while (a != number);
		printf("��ϲ��¶��ˣ���һ������%d�Ρ�\n", count);
	system("pause");
	return 0;
}