#include <stdio.h>
#include <string.h>
int main()
{
    char str1[15];
    fgets(str1,15,stdin);
    printf("\nEnter Second String: \n");
    char str2[15];
    fgets(str2,15,stdin);
    printf("%d", strlen(str1));
    for (int i = 0; i<strlen(str1)-2; i++)
    {
        for (int j = 0; j < strlen(str1)-2-i; j++)
        {
            if (str1[j]>str1[j+1])
            {
                char t = str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=t;
            }
            
        }
        
    }
    for (int i = 0; i<strlen(str2)-2; i++)
    {
        for (int j = 0; j < strlen(str2)-2-i; j++)
        {
            if (str2[j]>str2[j+1])
            {
                char t = str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=t;
            }
            
        }
        
    }

    puts(str1);puts(str2);
    
    for (int i = 0; str1[i]!='\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
            printf("Not anagrams.");
            return 0;
        }
        
    }
    printf("They are anagrams");
    
    
    return 0;
}