#include<stdio.h>
int main()
{

	float area,r;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area = 3.14*r*r;
	printf("The area of the circle is = %.2f\n",area);
	return 0;
}
