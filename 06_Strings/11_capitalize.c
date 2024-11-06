#include <stdio.h>
int main(){
	char str1[25];
	gets(str1);
	int i;
	str1[0]-=32;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==' '){
			str1[i+1] -= 32;
		}
	}
	printf("%s", str1);
}
