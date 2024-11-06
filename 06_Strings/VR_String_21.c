#include <stdio.h>
#include <string.h>
int main()
{
    int len=100;
    char str[len];
    fgets(str,len,stdin);
    char word[len][len];
    int r=0;
    int c=0;
    int n=1;
    for (int i = 0; str[i]!=0; i++)
    {
        if(str[i]!=' '){
            word[r][c++] = str[i];
        }
        else{
            word[r][c] = '\0';
            r++;
            c=0;
            n++;
        }
    }
    // for (int i = 0; i<n ; i++)
    // {
    //     for (int j = 0; word[i][j]!='\0'; j++)
    //     {
    //         printf("%c", word[i][j]);
    //     }
    //     printf("\n");
    // }
    int maxLen = 0;
    int counter = 0;
    int maxIndex = 0;
    int minLen = strlen(word[0]);
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; word[i][j]!='\0'; j++)
        {
            counter++;
            printf("%d ",counter );
        }
        if (counter>maxLen){
            maxLen = counter;
            maxIndex = i;
        }
        if (counter<minLen)
        {
            minLen = counter;
            minIndex = i;
            printf(" INDEX%d ", minIndex);
        }
        counter=0;
        
    }

    printf("Longest Word: %s\nShortest Word: %s", word[maxIndex], word[minIndex]);
    
    
    return 0;
}