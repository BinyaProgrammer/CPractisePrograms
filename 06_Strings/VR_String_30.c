#include <stdio.h>
int main()
{
    char str[25]="is abc";
    // fgets(str,25,stdin);
    int len=0;
    for (; str[len]!='\0'; len++);
    if (len==0)
    {
        printf("-1");
        return 0;
    }
    else{
        int lastSpaceIndex = len-1;
        for (; str[lastSpaceIndex]!=' ' && lastSpaceIndex!=0; lastSpaceIndex--);
        if (lastSpaceIndex==0)
        {
            printf("%s", str);
        }
        else{
            for (int i = lastSpaceIndex+1;  str[i]!=0; i++)
            {
                printf("%c", str[i]);
            }
            
        }
        
        
    }
    return 0;
}