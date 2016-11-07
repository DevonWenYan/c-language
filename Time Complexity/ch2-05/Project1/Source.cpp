/*乘積總和*/
#include <stdio.h>
#include <stdlib.h>
/*程式執行的時間=(總和)(敘述被執行的次數(程式的步驟)X執行敘述所需要的時間(實測的執行時間))*/
void compute()
{
	int i, counter, Sum = 0;

	for (i = 0, counter = 0; i<100; i++)
	{
		Sum = Sum + i;       /*   這是準備被量測的步驟    */
		counter++;			/*計算被執行的次數*/
	}
	printf("%d\n", counter);
}


int main()
{
	compute();

	system("pause");
	return 0;
}

