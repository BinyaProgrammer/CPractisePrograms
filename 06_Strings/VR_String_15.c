#include <stdio.h>
int main()
{
    int n=10;
    // printf("Enter the length of the string: ");
    // scanf("%d", &n);
    char str[n];

    printf("Enter the string: ");
    
    gets(str);
    
    for (int i = 0; i<n-2; i++)
    {
        for (int j = 0; j < n-2-i; j++)
        {
            if (str[j]>str[j+1])
            {
                char t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
            }
            
        }
        
    }
    puts(str);
    char str2[5] = {'\0', 'a', 'b', 'c', 'd'};
    puts(str2);
    return 0;
}