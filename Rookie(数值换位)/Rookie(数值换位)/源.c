#include<stdio.h>
#include<stdlib.h>
void swap(int *pa, int *pb);

int main()
{
	int pa = 5;
	int pb = 6;
	swap(&pa, &pb);
	printf("pa=%d\npb=%d\n", pa, pb);
	system("pause");
	return 0;
}
void swap(int *pa, int *pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}