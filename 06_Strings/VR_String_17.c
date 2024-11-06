#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int words = 1;
    for (int i = 1; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            words++;
        }
        
    }
    printf("%d", words);
    
    return 0;
}