#include<stdlib.h>
#include<stdio.h>
int T1(int n)
{
	if (n == 1)
		return 2;
	else
	{
		return 2 * T1(n - 1) + 1;
	}
}
int T2(int n)
{
	if (n == 1)
		return 3;
	else
	{
		return T2(n - 1) + n;
	}

}
void main(void)
{
	printf("%d", T1(3) + T2(3));
	system("pause");
	return;
}