#include <stdio.h>

int main(){
	int i,j,n=5,s;
	for(i=0;i<n;i++){
		for(s=0;s<n-i-1;s++)
			printf(" ");
		for(j=0;j<2*i+1;j++)
			printf("*");
		printf("\n");
	}

	for(i=0;i<n-1;i++){
		for(s=0;s<i+1;s++)
			printf(" ");
		for(j=0;j<2*n-2*i-3;j++)
			printf("*");
		printf("\n");
	}
}
