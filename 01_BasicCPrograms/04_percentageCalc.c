#include <stdio.h>

int main()
{
	float m1, m2, m3, m4, m5;
	printf("Enter your marks:\n");
	scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
	printf("Your percentage is: %f %%", (m1+m2+m3+m4+m5)/5);
	return 0;
}
