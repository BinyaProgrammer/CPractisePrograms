#include <stdio.h>
#include <string.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);

    int flag = 1;

    for (int i = 0; i<strlen(str)-3; i++)
    {
        if (str[i]!=str[i+2])
        {
            flag = 0;
            printf("No");
            break;
        }
        
    }
    if (flag)   
    {
        printf("Yes");
    }
    
    
    return 0;
}