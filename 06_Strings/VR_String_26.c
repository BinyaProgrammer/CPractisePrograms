#include <stdio.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);
    for (int i = 0; str[i]!=0; i++)
    {
        int c = 0;
        for (int j = 0; str[j]!=0; j++)
        {
            if (str[i]==str[j])
            {
                c++;
            }
            
        }
        if(c==1){printf("%c", str[i]);break;}
        
    }
    
    return 0;
}   