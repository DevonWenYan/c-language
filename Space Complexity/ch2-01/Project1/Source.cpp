/*Space Complexity*/
#include <stdio.h>
#include <stdlib.h>
/*S(P)=Sf<�T�w�O����>+Sv(P,I)<�ܰʰO����>=c+Sv(P,I)*/
int func1(int x, int y)
{
	return (x + y)*(x - y);   /*����Ʒ|�Q�I�s�A�ҥH�ASv(P!=0,I=0)*/
}

void main()
{
	printf("%d\n", func1(3, 2));
	system("pause");
	return;
}