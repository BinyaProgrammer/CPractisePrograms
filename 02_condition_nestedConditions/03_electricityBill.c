#include<stdio.h>

int main()
{
	float sur_charge = 100;
	float units_burnt;
	float rate_per_100_units = 3;
	printf("Enter the units_burnt:\n");
	scanf("%f", &units_burnt);
	printf("Total electricity bill is %f", sur_charge+((rate_per_100_units)/100)*units_burnt );
	return 0;
}
