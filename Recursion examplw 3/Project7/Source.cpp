#include<stdlib.h>
#include<stdio.h>

int Qfunc(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return Qfunc(a - b, b);
	}
}
void main(void)
{
	printf("%d", Qfunc(255, 2));
	system("pause");
}
