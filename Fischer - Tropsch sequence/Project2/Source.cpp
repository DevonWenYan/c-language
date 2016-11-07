#include<stdlib.h>
#include<stdio.h>
int fib(int n)
{
	if (n < 2)
		return 1;
	else
		return (fib(n - 2) + fib(n - 1));
}
void main(void)
{ 
	int i,count=0;
	int a;
	printf("多少費氏數列?\n");
	scanf_s("%d", &a);
	for (i = 0; i <= a; i++)
	{
		count++;
		if (count > 5)
		{
			printf("\n");
			count = 0;
		}
		printf("%d  ", fib(i));
	}
	printf("\n");
	system("pause");
	return;
}