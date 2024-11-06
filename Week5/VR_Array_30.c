#include <stdio.h>
int main()
{
    int a[3] = {1,2,3};
    int b[3] = {3,4,5};
    int num1=0, num2=0;
    for (int i = 0; i < 3; i++)
    {
        num1=num1*10+a[i];
        num2=num2*10+b[i];

    }
    printf("%d", num1+num2);
    
    
    return 0;
}