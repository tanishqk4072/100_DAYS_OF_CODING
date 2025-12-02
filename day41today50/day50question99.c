/*Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>
#include<string.h>

int main() 
{
    char str[10];
    printf("Enter the date (dd/04/yyyy format):");
    scanf("%s",str);
    printf("%.2s-Apr-",str);  //.2s prints the first two characters of the string
    for(int i=6;i<10;i++)
    {
        printf("%c",str[i]);
    }
    
    
    return 0;
}