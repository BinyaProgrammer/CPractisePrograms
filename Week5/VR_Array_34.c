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

    int l_half = 0;
    int r_half = 0;
    for (int i = 0; i < n/2; i++)
    {
        l_half+=a[i];
    }

    for (int i = n/2; i < n; i++)
    {
        r_half+=a[i];
    }
    
    int sub = r_half-l_half;
    if(sub>0)
    {
        printf("Its unbalanced. %d needs to be added to any element in left half", sub);
    }
    else if(sub<0){
        printf("Its unbalanced. %d needs to be added to any element in right half", -sub);

    }
    
     
    return 0;
}