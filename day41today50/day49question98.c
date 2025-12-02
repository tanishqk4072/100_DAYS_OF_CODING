/*Q98 (Strings)
Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include<string.h>

int main() 
{
    int count=0;
    int index[5];
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if(str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    printf("%c.",str[0]);
    
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            index[count]=i;
            count++;
        }
    }
    for(int j=0;j<count;j++)
    {
        if(j==count-1)
        {
            printf(" ");
            for(int k=index[j]+1;k<l;k++)
            {
                printf("%c",str[k]);
            }
            break;
        }
        printf("%c.",str[index[j]+1]);
    }
   
   
   return 0;
}