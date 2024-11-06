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
    
    int k;
    printf("Enter the number k: ");
    scanf("%d", &k);


    int r[n];
    int remaindercount[k];

    for (int i = 0; i < k; i++)
    {
        remaindercount[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        r[i] = a[i]%k;
        int t = a[i]%k;
        remaindercount[t]+=1; 
    }
    int possible = 1;
    for (int i = 0; i < k; i++)
    {
        if (remaindercount[i]%2!=0)
        {
            possible=0;
        }
        
    }
    if (possible==1)
    {
        printf("True");
    }
    else printf("False");
    

    

    return 0;
}