/*  ch2_02.c   */
#include <stdio.h>
#include <stdlib.h>
void func2(int x, int ary[], int n);
void main()
{
	int array[10];
	int i=0;
	func2(5, array, 10);
	system("pause");
	return;
}
void func2(int x, int ary[], int n)
{
	const int k = 10;
	int i;
	for (i = 0; i < n; i++)
	{
		*(ary + i) = i * x * k;  /*陣列即是指標*/
		printf("%d\n", *(ary + i));
	}
}