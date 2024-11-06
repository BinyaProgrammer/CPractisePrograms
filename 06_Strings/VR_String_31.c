#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[10];
    fgets(str,10,stdin);
    int valid = 1;
    for (int i = 0; i < 10; i++)
    {
        if (isdigit(str[i]))
        {
            valid = 0;
        }
        
    }
    
    if(valid){
        for (int i = 0; i<(strlen(str)-1)/2; i++)
        {
            char t = str[i];
            str[i] = str[strlen(str)-1-i];
            str[strlen(str)-1-i] = t;
        }
        printf("%s", str);
        
    }
    else printf("Invalid String");
    
    return 0;
}