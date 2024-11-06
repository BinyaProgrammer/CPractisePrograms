#include <stdio.h>
int main(){
	char str1[10];
	char str2[10];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	int i,flag = 1;
	for(i=0; str1[i]!='\0'||str2[i]!='\0'; i++){
		if(str1[i]!=str2[i]){
			flag = 0;
			break;
		}                                                                                                                                                                                                                                                               
	}
	if(flag==1)
		printf("Equal strings");
	else printf("Unequal");
	
}
