#include <stdio.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);
    int paran_counter[2] = {0}, flower_counter[2] = {0}, square_counter[2]={0}, arrow_counter[2]={0};
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='(')
            paran_counter[0]++;
        else if (str[i]==')')
            paran_counter[1]++;
        else if (str[i]=='[')
            square_counter[0]++;  
        else if (str[i]==']')
            square_counter[1]++;   
        else if (str[i]=='<')
            arrow_counter[0]++;   
        else if (str[i]=='>')
            arrow_counter[1]++;   
        else if (str[i]=='{')
            flower_counter[0]++;
        else if (str[i]=='}')
            flower_counter[1]++;      
    }
    
    
        if (paran_counter[1]!=paran_counter[0]||flower_counter[1]!=flower_counter[0]||arrow_counter[1]!=arrow_counter[0]||square_counter[1]!=square_counter[0])
        {
            printf("Invalid");
        }
        
    
    
    return 0;
}