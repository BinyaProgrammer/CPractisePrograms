#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int alpha[26];
    
    for (int i = 0; i < 26; i++)
    {
        alpha[i]  = 0;
    }

    for (int i = 0; str[i]!='\0'; i++)
    {
        
        alpha[str[i]-'a']++;
    }
    
    int flag = 1;
    
    for (int i = 0; i<26; i++)
    {
        if (alpha[i]!=0 && alpha[i]!=i+1)
        {
            printf("Not a Super String");
            flag = 0;
            break;
        }
        
    }
    if (flag)
    {
        printf("It is a Super String.");
    }
        
    return 0;
}