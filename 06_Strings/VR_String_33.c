#include <stdio.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);
    char str2[25];
    fgets(str2,25,stdin);
    int f[25] = {0};
    for (int i = 0; str[i]!=0; i++)
    {
        int flag = 0;
        for (int j = 0; str2[j]!='\0'; j++)
        {
            if (str[i]==str2[j] && f[j]!=-1)
            {
                flag = 1;
                f[j] = -1;
                break;

            }
            
        }
        if (flag==0)
        {
            printf("Not Possible"); return 0;
        }
        
    }
    printf("Possible");
    return 0;
}