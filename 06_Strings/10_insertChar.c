#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int c = 0,i;
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	int k;
	printf("Enter the index: ");
	scanf("%d", &k);
	
	for(i=0;str1[i]!='\0';i++){
		c++;
	}
	for(i=c-1;i>=k;i--){
		str1[i+1] = str1[i];
	}
	str1[k] = ch;
	printf("%s", str1);
}
