#include <stdio.h>

int main(){
	int i,j,n=5,k=1;
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<6;j++)
				printf("%d", k);
			k++;
			printf("%d",k);
		}
		else{
			printf("%d", k+1);
			for(j=0;j<6;j++)
				printf("%d", k);
			k++;
		}
	printf("\n");
	}
}
