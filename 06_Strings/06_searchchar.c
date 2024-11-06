#include <stdio.h>
int main(){
	char str1[10];
	gets(str1);
	int i;
	char ch;
	printf("Enter character: ");
	scanf("%c", &ch);
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==ch){
			printf("Character found at %d index", i);
			break;
		}
	}
}
