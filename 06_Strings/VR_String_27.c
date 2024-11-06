#include <stdio.h>
int main()
{
    int n = 100;
    char str[n];
    gets(str);
    int alph[26] = {0};
    for (int i = 0; str[i]!='\0'; i++)
    {
        // printf("%d", str[i]-'a');
        alph[str[i]-'a'] = 1;
        // printf("%d",alph[str[i]-'a']);
    }

    int flag = 1;
    for (int j = 0; j < 26; j++)
    {
        if (alph[j]==0)
        {
            printf("%d", j);
            flag = 0;
            break;
        }   
    }

    if (flag==0)
    {
        printf("Not a pangram");
    }
    else printf("Its a pangram");
    
    return 0;
}