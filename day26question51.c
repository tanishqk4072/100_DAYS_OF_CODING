//  Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main(){
int i,row,space,num;
printf("enter no. of rows: ");
scanf("%d",&row);
for (i=1;i<=row;i++)
{
    for(space=1;space<=(row-i);space++)
    {
        printf(" ");
    }
    for(num=(i-1);num>=0;num--)
    { 
        printf("%d",(row-num));
    }
printf("\n");
}

return 0;
}