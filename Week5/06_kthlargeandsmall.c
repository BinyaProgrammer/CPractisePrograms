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
	for(i=0; i<n; i++){
		for(j=0;j<n-1-i;j++){
			if(a[j+1]<a[j]){
				int t;
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	int k;
	printf("Enter k value: ");scanf("%d", &k);
	printf("kth largest value: %d\nkth smallest value: %d", a[n-k], a[k-1]);
	return 0;}
