#include <stdio.h>
int main()
{
    char str[10];
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>65 && str[i]<65+25)
        {
            printf("%c", str[i]);
            break;
        }
        
    }
    
    return 0;
}