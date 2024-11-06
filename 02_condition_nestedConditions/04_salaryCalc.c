#include<stdio.h>

int main()
{
	int sal;
	float da, hra;
	printf("Enter the base salary:\n");
	scanf("%d", &sal);
	if (sal<10000)
		{
			da = 0.2;
			hra = 0.1;
		}
	else if (sal>=10000 && sal<=20000)
		{
			da = 0.3;
			hra = 0.2;
		}
	else if (sal>20000)
		{
			hra = 0.3;
			da = 0.4;
		}
	sal += (float)(sal*hra + sal*da) ;
	printf("%d", sal);
	return 0;
}
