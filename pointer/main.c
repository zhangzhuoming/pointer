#include <stdio.h>
void main()
{
	extern exchange(int *p1, int *p2);
	int a,b,*p1,*p2;
	scanf("%d%d", &a, &b);
	/*p1 = &a;
	p2 = &b;*/
	exchange(a, b);
	printf("a=%d,b=%d\n", a,b);
	/*printf("max=%d,min=%d\n", *p1, *p2);*/

	system("pause");
}