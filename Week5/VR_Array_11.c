#include <stdio.h>
int main()
{
    int a[10] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int flag;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (a[i]==a[j])
            {
                printf("%d is the first repeating element.", a[i]);
                flag = 1;
                break;
            }
            
        }
        if (flag==1)
        {
            break;
        }
        
    }
    
    return 0;
}