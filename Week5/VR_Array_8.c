#include <stdio.h>
int main()

{
    int n = 10;
    int a[10] = {12,5,33,4,5,5,2,23,2,5};
    int dups = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j]) 
            {
                dups++;
                for (int k = j; k < n-1; k++)
                {
                    a[k] = a[k+1];
                }
                n--, j--;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %4d ", a[i]);
    }
    
    return 0;
}