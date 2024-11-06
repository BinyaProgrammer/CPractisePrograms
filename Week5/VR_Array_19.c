#include <stdio.h>
int main()
{
    int a[6] = {0,5,19,22,27};
    int k, insertion=0;
    printf("Enter the value to add: ");
    scanf("%d", &k);
    int t, flag = 0;
    for (int i = 0; i < 6; i++)
    {
        if(a[i]>k && flag == 0){
            t=a[i];
            a[i] = k;
            flag = 1;
            continue;
        }  
        if(flag == 1){
            k=a[i]; a[i] = t; t = k; 

        }


    }

    for (int i = 0; i < 6; i++)
    {
        printf("%4d", a[i]);
    }
    
    
    return 0;

}


//Method 2

/*
#include <stdio.h>

int main() {
    int n, i, newElement, pos;

    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Allocate space for one more element

    // Read elements into the sorted array
    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the new element to be inserted
    printf("Enter the new element to be inserted: ");
    scanf("%d", &newElement);

    // Find the position to insert the new element
    pos = n; // Assume the new element goes at the end
    for (i = 0; i < n; i++) {
        if (newElement < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = newElement;
    n++; // Increment the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/