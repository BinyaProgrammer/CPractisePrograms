#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int c = 0,i;
	for(i=0;str1[i]!='\0';i++){
		c++;
	}
	int flag=1;
	for(i=0;i<c/2;i++){
		if(str1[i]!=str1[c-i-1]){
			flag = 0;
			break;
		}                                                                                                                                                                                                                                                               
	}
	if(flag==1)
		printf("Palindrome");
	else printf("Not palindrome");
}
