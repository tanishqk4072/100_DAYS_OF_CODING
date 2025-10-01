// Write a program to print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main(){
    int i,j,n,m;
    printf("enter a odd number: ");
    scanf("%d",&n);
    m=(n+1)/2;
    if(n%2!=0)
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m-i;j++)
            printf(" ");
            for(j=1;j<=2*i-1;j++)
            printf("*");

            printf("\n");
        }
        for(i=m-1;i>0;i--)
        {
            for(j=1;j<=m-i;j++)
            printf(" ");
            for(j=1;j<=2*i-1;j++)
            printf("*");

            printf("\n");
        }
        
        
    }
    return 0;

}