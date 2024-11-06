#include <stdio.h>

int main(){
	int i,j,n=5,k=1;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++)
			printf("%d ", k++);
		printf("\n");
	}
}
