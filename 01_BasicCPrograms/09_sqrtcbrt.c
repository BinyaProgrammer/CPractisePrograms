#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	printf("Enter the number: ");
	scanf("%f", &a);
	printf("Squareroot of %f is: %f\n", a, sqrt(a));
	printf("Cuberoot of %f is: %f", a, cbrt(a));
	return 0;
}
