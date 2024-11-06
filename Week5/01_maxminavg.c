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
	float s=0;
	int max=a[0],min=a[0];
	for(i=0; i<n; i++){
		s+=a[i];
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	printf("Minimum Value = %d\nMaximum Value = %d\n Average = %f", min, max, s/n);
	return 0;
}
