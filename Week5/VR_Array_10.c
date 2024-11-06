// #include <stdio.h>
// int main()
// {
//     int n=10, a[10]={6,11,5,3,2,3,4,5,11,11};
//     int b[10] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i]==a[j] && b[j]==0)
//             {
//                 b[j]=1;
//                 printf("%4d", a[i]);
//                 i--;
//             }
//         }

//         if(b[i]==0)
//         printf("%4d",a[i]);
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (b[i]!=0)
//     //     {
//     //         printf("%3d", a[i]);
//     //     }
        
//     // }
    
    
//     return 0;
// }



// \*
// #include <stdio.h>

// int main() {
//     int n, i, j;
    
//     // Input the size of the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     int printed[n];  // Array to track whether a duplicate has been printed
    
//     // Initialize the printed array to 0 (false)
//     for (i = 0; i < n; i++) {
//         printed[i] = 0;
//     }
    
//     // Input elements of the array
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Check for duplicates
//     printf("Duplicate elements in the array are: ");
//     int found = 0;
//     for (i = 0; i < n; i++) {
//         // Skip the element if it's already been printed
//         if (printed[i]) {
//             continue;
//         }
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j] && arr[i]!=1){
//                 printf("%d ", arr[i]);
//                 found = 1;
//                 printed[j] = 1; // Mark as printed
//                 i--;
//                 break;
//             }
//         }
//     }
    
//     if (!found) {
//         printf("None");
//     }
    
//     return 0;
// }



#include <stdio.h>
int main()
{
    int a[10] = {1,2,4,6,3,1,2,3,4,5};
    int k = 0;
    int b[10] = {0};
    int dups = 0;
    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = 0; j < 10; j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
            
        }
        if (count>1)
        {
            b[k] = a[i];
            k++;
        }
        
        
    }
    for (int i = 0; i < k; i++)
    {
        printf("%4d", b[i]);
    }
    
    return 0;
}