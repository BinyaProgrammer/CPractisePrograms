#include <stdio.h>

int main()
{
	int n=213430, c=0, rn=0;
	while(n!=0){
		rn = (rn*10 + n%10);
		c++;
		n = n/10;
	}
	printf("%d\n", c);
	
	printf("%d", rn);
	return 0;
}
