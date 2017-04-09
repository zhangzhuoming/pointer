void exchange(int str[], int *p)
{
	int i,st[10];
	for (i = 0; i < 10; i++)
	{
		st[i] = str[i];
	}
	for (i = 9; i >=0; i--)
	{
		*(p++)  = st[i];
	}
}