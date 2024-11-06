#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]<65+26 && str1[i]>=65)
			str1[i] += 32;
	}
	printf("%s", str1);
}
