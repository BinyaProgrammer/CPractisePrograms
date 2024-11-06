#include <stdio.h>

int main()
{
	int n=23144, s=0;
	while(n!=0){
		s += (n%10);
		n=n/10;
	}
	printf("%d", s);
	return 0;
}
