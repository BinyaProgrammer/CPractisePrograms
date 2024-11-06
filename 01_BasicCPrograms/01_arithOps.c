#include <stdio.h>

int main()
{
	int a,b ;
	printf("Enter the values of a and b:\n");
	scanf("%d %d", &a, &b);
	printf("Sum of the two numbers is %d\nDifference of the two numbers is %d\nProduct of the two numbers is %d\nQuotient of the two numbers is %d", a+b, a-b, a*b, a/b);
	return 0;
}
