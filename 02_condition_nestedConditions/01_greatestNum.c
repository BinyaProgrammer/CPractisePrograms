#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if ((a==b && c>a) || (b==c && a>b) || (a==c && b>a) || (a!=b && b!=c))
	{
		if (a>b && a>c)
			printf("%d is greatest", a);
		else if (b>a && b>c)
			printf("%d is greatest", b);
		else if (c>a && c>b)
			printf("%d is greatest", c);
	}
	else if ((a==b && a>c) || (a==c && a>b))
		printf("%d is largest", a);
	
	else if ((b==c && b>a) || (b==a && b>c))
		printf("%d is largest", b);
		
	else if ((c==b && c>a) || (a==c && a>b))
		printf("%d is largest", c);
		
	else
		printf("All are equal");
	
	return 0;
}

