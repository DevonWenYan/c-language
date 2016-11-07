/*  實際測量二 */
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
	func1();		/*各呼叫func1()之前與之後各呼叫一次E = time(NULL)*/
	E = time(NULL);
	Run_Time = difftime(S, E);	/*利用difftime()可以計算時間差*/
	printf("%d\n", Run_Time);
}
void main()
{
	compute();
	system("pause");
	return;
}