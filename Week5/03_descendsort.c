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
			if(a[j+1]>a[j]){
				int t;
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%2d", a[i]);
	}
	return 0;
}
