#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter the two numbers:\n");
	scanf("%f %f", &a, &b);
	int c=a*b;
	printf("Int part of product is %d\nFloat part of product is %f", c, a*b);
	return 0;
}
