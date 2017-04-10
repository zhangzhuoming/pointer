#include <stdio.h>
void main()
{
	int  i, j, a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11}, (*p)[4];
	p = a;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", *(*(p + i) + j));
		}
		printf("\n");
	}
	system("pause");
}