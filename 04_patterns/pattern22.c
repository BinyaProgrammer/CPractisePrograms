#include <stdio.h>

int main(){
	int i,j,n=5;
	for(i=0;i<n;i++){
		for(j=0;j<2*i+1;j++)
		if(j%2==0)
			printf("%d", i+1);
		else
			printf("*");
	 printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<2*n-2*i-1;j++)
		if(j%2==0)
			printf("%d", n-i);
		else
			printf("*");
	printf("\n");
	}
}
