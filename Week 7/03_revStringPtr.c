#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i;
	char *p=(char *)malloc(80*sizeof(char));
	printf("Enter the string\n");
	gets(p);
	int n=strlen(p);
	for(i=0;i<n/2;i++)
	{
        char t;
		t=p[n-i-1];
		p[n-i-1]=p[i];
		p[i]=t;
	}
	printf("The reversed string is %s",p);
	free(p);
	return 0;
}