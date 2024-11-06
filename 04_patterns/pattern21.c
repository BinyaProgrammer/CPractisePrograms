#include <stdio.h>

int main(){
	int i,j,n,k;
	scanf("%d %d", &k, &n);
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++)
			printf("%d ", k);
		printf("\n");k++;
	}
	k--;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("%d ", k);
		printf("\n");k--;
	}
}
