#include<stdio.h>

int main()
{
	int d, m, y;
	printf("Enter date month and year respectively:\n");
	scanf("%d %d %d", &d, &m, &y);
	int odd_days, leap_years;
	odd_days = 0;
	leap_years = (y-(y%4))/4-1;
	odd_days += ((leap_years*2)+((y-1-leap_years)*1))/7;
	
}
