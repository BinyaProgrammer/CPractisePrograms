#include <stdio.h>
int main()
{
    int i,j,n=4;
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n-1-i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}