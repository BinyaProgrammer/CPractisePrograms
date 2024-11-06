#include <stdio.h>

int main()
{
	int n=5, s=1;
	for(; n>=1; n--){
		s*=n;
	}
	printf("%d", s);
	return 0;
}
