#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int var = 10;
	int *ptr = &var;
	printf("變數 var 的值：%d\n", var);
	printf("變數 var 的記憶體位址：%p\n", &var);
	printf("指標 ptr 指向的位址：%p\n", ptr);
	printf("取出 ptr 指向的記憶體位置之值：%d\n", *ptr);
	*ptr = 20;

	printf("var = %d\n", var);
	printf("*ptr = %d\n", *ptr);
	system("pause");
	return 0;
}