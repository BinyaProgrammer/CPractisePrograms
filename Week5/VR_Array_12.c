#include <stdio.h>
int main()
{
    int a[10] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int flag;
    for (int i = 0; i < 10; i++,flag=0)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (a[i]==a[j])
            {
                flag = 1;
                break;
            }
            
        }
        if (flag==0)
        {
            printf("%d is the first non repeating element.", a[i]);
            break;
        }
        
    }
    
    return 0;
}