#include <stdio.h>
int main(){
	int n;
	printf("Enter the length of array: ");scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		printf("Enter the [%d] element: ", i+1);
		scanf("%d", &a[i]);
	}
	int k, c=0;
	printf("Enter value of k: "); scanf("%d", &k);
	for(i=0;i<n;i++){
		if(a[i]==k)c++;
	}
	printf("Number %d has occured %d times", k, c);
	return 0;
}
