#include <stdio.h>

int main()
{
	float p, r, i;
	int t;
	printf("Enter principal amount, rate of interest and time period(in years)");
	scanf("%f %f %d", &p, &r, &t);
	i = p*r*t/100;
	printf("Your simple interest is: %f", i);
	return 0;
}
