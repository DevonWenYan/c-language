/*  ��ڴ��q�@ */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*#include <time.h>�����w�q�禡#define CLK_TCK=1000.0*/
void func1()
{
}

void compute()
{
	double Run_Time;
	long S, E;
	S = clock();
	func1();								/*�ũI�sfunc1()5���e�P����U�I�s�@��clock()*/
	E = clock();
	Run_Time = ((double)(S - E)) / CLK_TCK;/*��̤��t���H1000�A�Y��func1()����ɶ�*/
	printf("%f\n", Run_Time);
}

void main()
{
	compute();
	system("pause");
	return;
}