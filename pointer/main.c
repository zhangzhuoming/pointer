#include <stdio.h>
void main()
{
	int  i, j, a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11}, (*p)[4];
	p = a;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d", *(*(p + i) + j));
		}
		printf("\n");
	}
	for (;;)
	{
		printf("input a a[?][?]:");
		printf("a[");
		i = getch();
		if(i==27)
			break;
		printf("%c]", i);
		printf("[");
		j = getch();
		if (j == 27)
			break;
		printf("%c]", j);
		printf("number is %d\n", a[i - 48][j - 48]);
	}
	
	system("pause");
}