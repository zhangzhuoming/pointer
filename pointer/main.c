#include <stdio.h>
void main()
{
	int max(int, int);
	int min(int, int);
	int add(int, int);
	void process(int, int, int(*fun)());
	int a, b;

	printf("enter a and b:\n");//调用max函数
	scanf("%d %d", &a, &b);
	printf("max=");
	process(a, b, max);

	printf("enter a and b:\n");//调用min函数
	scanf("%d %d", &a, &b);
	printf("min=");
	process(a, b, min);

	printf("enter a and b:\n");//调用add函数
	scanf("%d %d", &a, &b);
	printf("add=");
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