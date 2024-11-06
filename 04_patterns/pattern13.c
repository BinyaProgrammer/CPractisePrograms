#include <stdio.h>

int main(){
	int i,j1,j2,n=5,s;
	for(i=0;i<n;i++){
		for(j1=0;j1<i+1;j1++)
			printf("*");
		for(s=0;s<2*n-2*i-2;s++)
			printf(" ");
		for(j2=0;j2<i+1;j2++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j1=0;j1<n-i;j1++)
			printf("*");
		for(s=0;s<2*i;s++)
			printf(" ");
		for(j2=0;j2<n-i;j2++)
			printf("*");
		printf("\n");
	}
}
