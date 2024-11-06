#include <stdio.h>

int main()
{
	int a1=0, a2=1, c=2, s=0, n=8;
	printf("%d\n%d\n", a1, a2);
	for(;c!=n;c++){
		s = a1+a2;
		printf("%d\n", s);
		a1=a2;
		a2=s;
	}
	return 0;
}

