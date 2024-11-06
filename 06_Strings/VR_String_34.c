#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "AXLE";
    for (int i = 1; i<=strlen(str); i++)
    {
        for (int j = 0; (j+i)<=strlen(str); j++)
        {
            for (int k = j; k < j+i; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
