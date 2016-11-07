/*  實際測量一 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*#include <time.h>內有定義函式#define CLK_TCK=1000.0*/
void func1()
{
}

void compute()
{
	double Run_Time;
	long S, E;
	S = clock();
	func1();								/*宣呼叫func1()5之前與之後各呼叫一次clock()*/
	E = clock();
	Run_Time = ((double)(S - E)) / CLK_TCK;/*兩者之差除以1000，即為func1()執行時間*/
	printf("%f\n", Run_Time);
}

void main()
{
	compute();
	system("pause");
	return;
}