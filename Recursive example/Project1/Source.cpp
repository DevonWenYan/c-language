#include<stdlib.h>
#include<stdio.h>

int  factorial(int n)
{
	if (n == 1)
		return(1);
	
	else
		return(n*factorial(n - 1));
}


void main(void)
{
	int i;
	printf("¶}©l»¼°j:\n");
	for (i = 5; i >0 ;i--)
	{
		printf("%d! = %d\n", i, factorial(i));
	}
	system("pause");
	return;
}