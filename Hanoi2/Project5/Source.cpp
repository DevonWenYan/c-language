/*  Towers of Hanoi  */

#include <stdio.h>
#include <stdlib.h>

int hanoi(int n, char T1, char T2, char T3)   /*�e���𪺺t��k*/
{
	if (n<1)
		return 1;
	if (n == 1)								/*�̫�N�̫�@�ӽL�l����̫�@��*/
		printf("%c��γ̤W�h�L�l���ʨ�%c���\n", T1, T3);
	else
	{
		hanoi(n - 1, T1, T3, T2);         /*�N�Ĥ@�ӽL�l���ĤT�ӽL�l*/
		printf("%c��γ̤W�h�L�l���ʨ�%c���\n", T1, T3);
		hanoi(n - 1, T2, T1, T3);		/*�N�ĤG�ӽL�l����Ĥ@�ӽL�l�̤W��*/
	}
	return 0;
}

int main()
{
	int i;
	printf("�п�J�A�n��W���h�֭ӽL�l:\n");
	scanf_s("%d", &i);
	hanoi(i, 'A', 'B', 'C');

	system("pause");
	return 0;
}
