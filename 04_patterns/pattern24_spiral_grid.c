#include <stdio.h>

#define n 7

int main()
{
    int matrix[n][n] = {};
    int top = 0, left = 0, right = n-1, bottom = n-1, value = 1;

    while (top<=bottom && left<=right)
    {

        // top row
        for(int i=left; i<=right; i++){
            matrix[top][i] = value++;
        } 
        top++;

        // right column
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = value++;
        }
        right--;

        // bottom row
        for (int i = right; i>=left ; i--)  
        {
            matrix[bottom][i] = value++;
        }
        bottom--;

        // left column
        for (int i = bottom; i>=top; i--)
        {
            matrix[i][left] = value++;
        }
        left++;
        
    }
    int i,j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++){
            printf(" %3d ", matrix[i][j]);
        }
        printf("\n" );
    }
    return 0;
    
}