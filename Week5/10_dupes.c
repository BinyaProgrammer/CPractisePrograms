#include <stdio.h>
int main(){
	int n;
	printf("Enter the length of array: ");scanf("%d", &n);
	int a[n];
	int b[n],k=0;
	int i,j;
	for(i=0; i<n; i++){
		printf("Enter the [%d] element: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		int c=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i!=j){
				c++;
			}
		if(c!=0){
			b[k]=a[i];
			k++;
		}
		}
	for(i=0;i<k;i++){
		printf("%4d", b[i]);
	}
	}
	return 0;
}
