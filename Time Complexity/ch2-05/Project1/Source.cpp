/*���n�`�M*/
#include <stdio.h>
#include <stdlib.h>
/*�{�����檺�ɶ�=(�`�M)(�ԭz�Q���檺����(�{�����B�J)X����ԭz�һݭn���ɶ�(���������ɶ�))*/
void compute()
{
	int i, counter, Sum = 0;

	for (i = 0, counter = 0; i<100; i++)
	{
		Sum = Sum + i;       /*   �o�O�ǳƳQ�q�����B�J    */
		counter++;			/*�p��Q���檺����*/
	}
	printf("%d\n", counter);
}


int main()
{
	compute();

	system("pause");
	return 0;
}

