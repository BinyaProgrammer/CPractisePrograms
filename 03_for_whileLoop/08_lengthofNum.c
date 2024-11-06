#include <stdio.h>

int main()
{
	int n=1111111111, c=0;
	while(n!=0){
		c++;
		n = n/10;
	}
	printf("%d", c);
	return 0;
}
