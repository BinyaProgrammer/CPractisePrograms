#include <stdio.h>

float avgCalc(int *p, int n){
	float s = 0;
	int i=0;
	for(;i<n;i++){
		s+=p[i];
	}
	return s/n;
}

int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	int i;
	for(i=0;i<n;i++)
		{
		printf("Enter %d element: ",i+1);
		scanf("%d", &a[i]);
	}
	float avg = avgCalc(a,n);
	printf("Average of array is %f.", avg);
	
}
