#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    int x;
    printf("Enter the number k: ");
    scanf("%d", &x);

    int count[n];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    
    
    for (int i = 0; i < n; i++)
    {
    
    int avg = (int)(a[i]+x)/2;
    for (int j = 0; j < n; j++)
    {
        if (a[j]==avg)
        {
            count[i] +=1;
        }
        
    }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%4d", count[i]);
    }
    


    return 0;
}