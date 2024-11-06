#include <stdio.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);
    int freq[25] = {0};
    for (int i = 0; str[i]!='\0'; i++)
    {
        int count=1;
        for (int j = i+1; str[j]!='\0'; j++)
        {
            if (str[i]==str[j])
            {
                freq[j] = -1;
                count++;
            }
            
        }
        if (freq[i]!=-1)
        {
            freq[i] = count;
        }
        
        
    }
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (freq[i]!=-1)
        {
            printf("%c frequency is %d\n", str[i], freq[i]);
        }
        
    }
    
    
    return 0;
}