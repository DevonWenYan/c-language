#include<stdlib.h>
#include<stdio.h>
int fn(int N)
{
	if (N <= 1)
	{
		return N;
	}
	else
	{
		return fn(N - 2) + fn(N - 1) + 1;
	}
}
void  main(void)
{
	printf("%d", fn(6));
	system("pause");
	return;
}