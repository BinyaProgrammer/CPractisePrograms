#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    for (int i = 0; str1[i]!='\0'; i++)
    {
        for (int j = 0; str2[j]!='\0'; j++)
        {
            if (str1[i]==str2[j])
            {
                for (int k = i; str1[k]!='\0'; k++)
                {
                    str1[k] = str1[k+1];
                }
                i--;
                
            }
            
        }
        
    }
    printf("%s", str1);
    
    
    return 0;
}