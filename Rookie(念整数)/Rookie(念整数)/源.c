#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num < 0)
	{
		num = -num;
		printf("fu ");
	}
	int i=num;
	int cnt = 0;
	while (i > 0) {
		i /= 10;
		cnt++;
	}
	while (cnt > 1) {
		int n = num;
		n = n / pow(10, (cnt - 1));
		int x = pow(10, (cnt - 1));
		num = num % x;
		cnt--;
		
		switch (n)
		{
		case 1: printf("yi ");
			continue;
		case 2: printf("er ");
			continue;
		case 3: printf("san ");
			continue;
		case 4: printf("si ");
			continue;
		case 5: printf("wu ");
			continue;
		case 6: printf("liu ");
			continue;
		case 7: printf("qi ");
			continue;
		case 8: printf("ba ");
			continue;
		case 9: printf("jiu ");
			continue;
		case 0: printf("ling ");
			continue;
		
		
		}
	}
	switch (num)
	{
	case 1: printf("yi");
		break;
	case 2: printf("er");
		break;
	case 3: printf("san");
		break;
	case 4: printf("si");
		break;
	case 5: printf("wu");
		break;
	case 6: printf("liu");
		break;
	case 7: printf("qi");
		break;
	case 8: printf("ba");
		break;
	case 9: printf("jiu");
		break;
	case 0: printf("ling");
		break;


	}
	system("pause");
	return 0;
}