#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int var = 10;
	int *ptr = &var;
	printf("�ܼ� var ���ȡG%d\n", var);
	printf("�ܼ� var ���O�����}�G%p\n", &var);
	printf("���� ptr ���V����}�G%p\n", ptr);
	printf("���X ptr ���V���O�����m���ȡG%d\n", *ptr);
	*ptr = 20;

	printf("var = %d\n", var);
	printf("*ptr = %d\n", *ptr);
	system("pause");
	return 0;
}