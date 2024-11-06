#include <stdio.h>
int main()
{
    int a[7] = {1,2,3,2,3,4,1};
    int freq[7] = {-1,-1,-1,-1,-1,-1,-1};
    
    for (int i = 0; i < 7; i++)
    {
        int count=1;
        for (int j = i+1; j < 7; j++)
        {
            if (a[i]==a[j])
            {
                freq[j]=0;
                count++;
            }
        }
        if (freq[i]!=0)
        {
            freq[i] = count;
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        if(freq[i]!=0)
        printf("%4d - %4d\n", a[i], freq[i]);
    }
    
    
    return 0;
}