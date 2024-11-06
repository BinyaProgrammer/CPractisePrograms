#include <stdio.h>
#include <math.h>
int main()
{
	float p, r, i;
	int t;
	printf("Enter principal amount, rate of interest and time period(in years)");
	scanf("%f %f %d", &p, &r, &t);
	int a = p * pow((1+(r/100)), t);
	printf("Your compound interest is: %f", a-p);
	return 0;
}
