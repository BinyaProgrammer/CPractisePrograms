#include <stdio.h>
#include <string.h>
int main()
{
    int n = 10;
    char str[n];
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
        {
            int j;
            for ( j = i; str[j]!='\0'; j++)
            {
                str[j] = str[j+1];
            }   
            i--;
        }
    }
    puts(str);
    
    return 0;
}