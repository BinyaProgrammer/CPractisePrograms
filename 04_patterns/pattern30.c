#include <stdio.h>
int main()
{
    int i,j,n=5,s;
    for ( i = 0; i < n; i++)
    {
        for ( s = 0; s < i; s++)
        {
            printf(" ");
        }
        printf("*");
        for ( j = 0; j < 2*n-3-2*i; j++)
        {
            printf("-");
        }
        if (n!=i+1)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}