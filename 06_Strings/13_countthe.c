#include <stdio.h>
int main(){
	char str1[25];
	gets(str1);
	int c = 0,i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==' ' && str1[i+1]=='t' && str1[i+2]=='h' && str1[i+3]=='e' && str1[i+4]==' '){
			c++;
		}
	}
	printf("%d", c);
}
