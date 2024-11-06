#include <stdio.h>
int main()
{
    int i,j,n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 65+n-i-1; j < 65+n; j++)
        {
            printf("%c", j);
        }
        printf("\n");
        
    }
    
    return 0;
}