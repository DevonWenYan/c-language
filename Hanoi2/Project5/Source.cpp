/*  Towers of Hanoi  */

#include <stdio.h>
#include <stdlib.h>

int hanoi(int n, char T1, char T2, char T3)   /*河內塔的演算法*/
{
	if (n<1)
		return 1;
	if (n == 1)								/*最後將最後一個盤子移到最後一個*/
		printf("%c木樁最上層盤子移動到%c木樁\n", T1, T3);
	else
	{
		hanoi(n - 1, T1, T3, T2);         /*將第一個盤子→第三個盤子*/
		printf("%c木樁最上層盤子移動到%c木樁\n", T1, T3);
		hanoi(n - 1, T2, T1, T3);		/*將第二個盤子推到第一個盤子最上面*/
	}
	return 0;
}

int main()
{
	int i;
	printf("請輸入你要塔上有多少個盤子:\n");
	scanf_s("%d", &i);
	hanoi(i, 'A', 'B', 'C');

	system("pause");
	return 0;
}
