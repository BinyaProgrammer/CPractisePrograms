#include <stdio.h>
int main()
{
    int n,i;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read elements into the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int odd[n], even[n], k=0, j=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)  
        {
            even[k] = arr[i];
            k++;
        }
        else if (arr[i]%2!=0)
        {
            odd[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d", even[i]);
    }
    
    
    return 0;
}