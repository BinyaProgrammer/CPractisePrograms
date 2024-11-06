#include <stdio.h>
int main(){
	int n;
	printf("Enter the length of array: ");scanf("%d", &n);
	int a[n];
	int i,j;
	for(i=0; i<n; i++){
		printf("Enter the [%d] element: ", i+1);
		scanf("%d", &a[i]);
	}
	int s = 0;
	printf("Enter the sum value: ");scanf("%d", &s);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(s-a[i]==a[j] && i!=j){
				printf("\n%d %d", a[i], a[j]);
			}
		}
	}
	return 0;
}
