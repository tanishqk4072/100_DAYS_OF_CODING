// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include <stdio.h>
int main(){
    int row,num,temp_row;
    printf("enter a number: ");
    scanf("%d",&row);
    temp_row=row;
    for(row;row>=1;row--)
    {
        for(num=row;num<=temp_row;num++)
             printf("%d",num);

        printf("\n");
    }
    

}