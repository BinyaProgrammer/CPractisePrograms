#include <stdio.h>
#include <string.h>
int main()
{
    char str1[15];
    fgets(str1,15,stdin);
    printf("\nEnter Second String: \n");
    char str2[15];
    fgets(str2,15,stdin);
    if (strlen(str1)!=strlen(str2))
    {
        printf("False");
        return 0;
    }
    int flag = 1;
    for (int i = 0; str1[i]!='\0'; i++)
    {
        for (int j = i+1; str2[j]!='\0'; j++)
        {
            if (str1[i]==str1[j] && str2[i]!=str2[j])
            {
                flag = 0;
                printf("Not isomorphic");
            }
            
        }
        
    }
    if (flag)
    {
        printf("Yes they are isomorphic in nature.");
    }
    
    
        
    return 0;    
    }
    
