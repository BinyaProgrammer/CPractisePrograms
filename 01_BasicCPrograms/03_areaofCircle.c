#include <stdio.h>

int main()
{
	float a;
	printf("Enter the radius:\n");
	scanf("%f", &a);
	printf("Area of circle of radius %f is %f units", a, 3.14*a*a);
	return 0;
}
