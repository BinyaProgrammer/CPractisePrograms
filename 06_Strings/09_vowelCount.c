#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int i,c=0;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'){
			c++;
		}
	}
	printf("%d", c);
}
