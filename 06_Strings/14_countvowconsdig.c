#include <stdio.h>
#include <string.h>
int main(){
	char str1[50];
	gets(str1);
	int c_vowel=0, c_cons=0, c_white=0,c_dig=0,i;
	for(i=0;str1[i]!='\0';i++){
		if(isalpha(str1[i])){
			if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
				c_vowel++;
			else c_cons++;}
		if(isspace(str1[i])) c_white++;
		if(isdigit(str1[i])) c_dig++;
		
	}
	printf("%d %d %d %d", c_vowel,c_cons,c_white,c_dig);
}
