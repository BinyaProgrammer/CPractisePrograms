#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int c = 0,i;
	for(i=0;str1[i]!='\0';i++){
		c++;
	}
	for(i=0;i<c/2;i++){
		char t;
		t = str1[i];
		str1[i] = str1[c-i-1];
		str1[c-i-1] = t;
	}
	printf("%s", str1);
}
