#include <stdio.h>
int main()
{
    char str[10];
    gets(str);
    int f[10] = {0};
    for (int i = 0; str[i]!='\0'; i++)
    {
        for (int j = i+1; str[j]!='\0'; j++)
        {
            if (str[i]==str[j])
            {
                f[j] = 1;
            }
            
        }
        
    }
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (f[i]==0)
        {
            printf("%c", str[i]);
        }
        
    }
    
    return 0;
}