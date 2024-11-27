#include <stdio.h>
int series(int n, int a, int b, int c){
	if(n==1) return a;
	else if(n==2) return b;
	else if(n==3) return c;
	else return series(n-1,a,b,c)+series(n-2,a,b,c)+series(n-3,a,b,c);
}
int main(){
	int n;
	scanf("%d", &n);
	int a,b,c;
	printf("Enter first three elements of the series: ");
	scanf("%d %d %d", &a, &b, &c);
	int elm = series(n, a, b, c);
	printf("%d", elm);
	return 0;
}
