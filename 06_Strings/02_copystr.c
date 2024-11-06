#include <stdio.h>
int main(){
	char str1[10];
	char str2[10];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	int c = 0,i;
	for(i=0;str2[i]!='\0';i++){
		str1[i] = str2[i];
	}
	printf("String 1: %s\nString 2: %s", str1, str2);
}
