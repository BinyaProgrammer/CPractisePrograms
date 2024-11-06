#include <stdio.h>
#include <math.h>

int main() {
    int n, i, count = 0;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    int b[n];
    
    // Read elements into the array
    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        b[i] = -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (fabs(arr[i])==fabs(arr[j]))
            {
                b[i] = 0;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i]!=0)
        {
            count++;
        }
        
    }
    printf("%4d ", count);
    
}
