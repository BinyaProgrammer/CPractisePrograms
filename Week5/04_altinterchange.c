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
	for(i=0;i<n;i+=2){
		int t;
		t = a[i+1];
		a[i+1] = a[i];
		a[i] = t;
	}
	for(i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	return 0;
}
