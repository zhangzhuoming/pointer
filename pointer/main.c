#include <stdio.h>
void main()
{
	int max(int, int);
	int min(int, int);
	int add(int, int);
	void process(int, int, int(*fun)());
	int a, b;

	printf("enter a and b:\n");
	scanf("%d %d", &a, &b);
	//调用max函数
	printf("max=");
	process(a, b, max);

	//调用min函数
	printf("min=");
	process(a, b, min);

	//调用add函数
	printf("sum=");
	process(a, b, add);

	system("pause");
}
int max(int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;
	return max;
}

int min(int a, int b)
{
	int min;
	if (a < b)
		min = a;
	else
		min = b;
	return min;
}

int add(int a, int b)
{
	int add;
	add = a + b;
	return add;
}

void process(int a, int b, int(*fun)())
{
	printf("%d\n", (*fun)(a, b));
}