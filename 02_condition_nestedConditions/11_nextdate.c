#include<stdio.h>

int main()
{
	int d, m, y;
	printf("Enter date month and year respectively:\n");
	scanf("%d %d %d", &d, &m, &y);
	

	if ((d==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)) || (d==30 && (m==4 || m==6 || m==9 || m==11 )))
		{
			d=1;
			m++;
		}
	
		
	else if (d==31 && m==12)
		{
			d=1;
			m=1;
			y++;
		}
		
	else if (m==2 && ((((y%4==0 && y%100!=0) || y%400==0) && d==29) || (!((y%4==0 && y%100!=0) || y%400==0) && d==28)))   
		{
			m++;
			d=1;
		}
	
	else if (d>32 || d<1 || (d>30 && (m==4 || m==6 || m==9 || m==11 )) || m>12 || m<1 || (m==2 && ((y%4==0 && y%100!=0) || y%400==0)&&d>29) || (m==2 && !((y%4==0 && y%100!=0) || y%400==0)&&d>28)) 
		printf("Invalid Date");
	
	else
		d++;
	
	
	printf("%d-%d-%d", d, m, y);
	return 0;
}
