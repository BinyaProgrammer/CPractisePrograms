#include <stdio.h>

int main()
{
	int a;
	printf("Enter number of days");
	scanf("%d", &a);
	printf("%d years and %d days ", a/365, a%365);
	return 0;
}
