#include <stdio.h>
int main()
{
	int a,b;
	printf ("enter the first number:");
	scanf ("%d",&a);
	printf ("enter the 2nd number:");
	scanf ("%d",&b);
	if (a>b)
	{
		printf ("%d is greater than %d", a,b);
	}
	else
	{
		printf ("%d is greater than %d", b,a);
	}
	return 0;
}
