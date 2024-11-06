#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    fgets(str,50,stdin);
    char words[10][10]; int r=0; int c=0;
    int no_of_words = 1;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]!=' ')
        {
            words[r][c++] = str[i];
        }
        else{
            no_of_words++;
            words[r][c] = '\0';
            r++;
            c=0;
        }
    }

    for (int i = 0; i < no_of_words-1; i++)
    {
        for (int j = 0; j < no_of_words-1-i; j++)
        {
            if (strcmp(words[j], words[j+1]) > 0) {
                char temp[10];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
        
    }
    for (int i = 0; i<no_of_words; i++)
    {
        for (int j = 0; words[i][j]!='\0'; j++)
        {
            printf("%c", words[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}