/*  ��ڴ��q�G */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func1()
{
}

void compute()
{
	double Run_Time;
	long S, E;
	S = time(NULL); 
	func1();		/*�U�I�sfunc1()���e�P����U�I�s�@��E = time(NULL)*/
	E = time(NULL);
	Run_Time = difftime(S, E);	/*�Q��difftime()�i�H�p��ɶ��t*/
	printf("%d\n", Run_Time);
}
void main()
{
	compute();
	system("pause");
	return;
}