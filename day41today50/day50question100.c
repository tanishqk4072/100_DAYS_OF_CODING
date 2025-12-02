/*Q100 (Strings)
Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    if(str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    
    for (int i=0;i<l;i++)
    {
        if(i==l-1)
        {
            printf("%c",str[i]);
            break;
        }
        for (int j=i;j<l;j++)
        {
            for (int k=i;k<=j;k++)
            {
                printf("%c",str[k]);
            }
                printf(",");
        }
    }

    return 0;
}