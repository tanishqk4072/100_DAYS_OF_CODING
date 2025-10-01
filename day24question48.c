// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345


#include <stdio.h>
int main(){
int i,row,star;
printf("enter no of rows: ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{

    for(star=1;star<=i;star++)
    printf("%d",star);
printf("\n");
}
return 0;



}