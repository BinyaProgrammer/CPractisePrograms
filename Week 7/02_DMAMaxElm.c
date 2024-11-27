#include <stdio.h>

int main(){
	printf("Enter the size of array: ");
	int n;
	scanf("%d", &n);
	int *a = (int *)malloc(n*sizeof(int));
	int i =0;
	for(;i<n;i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("Max element is %d", max);
	return 0;
}
