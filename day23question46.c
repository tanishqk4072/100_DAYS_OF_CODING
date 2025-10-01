//Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// ***** 
#include <stdio.h>
int main(){
int i,row,star;
printf("enter no of rows: ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
    for(star=1;star<=row;star++)
    printf("*");
printf("\n");
}

return 0;
}