/*Space Complexity*/
#include <stdio.h>
#include <stdlib.h>
/*S(P)=Sf<固定記憶體>+Sv(P,I)<變動記憶體>=c+Sv(P,I)*/
int func1(int x, int y)
{
	return (x + y)*(x - y);   /*此函數會被呼叫，所以，Sv(P!=0,I=0)*/
}

void main()
{
	printf("%d\n", func1(3, 2));
	system("pause");
	return;
}