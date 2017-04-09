#include <stdio.h>
void main()
{
	extern exchange(int str[], int *p);
	int i,a[10] = {0,1,2,3,4,5,6,7,8,9}, *p;
	p = a;
	exchange(a,p);
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p++));
	}
	system("pause");
}