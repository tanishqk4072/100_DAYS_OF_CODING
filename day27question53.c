//  Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *



#include <stdio.h>
int main() {
int i,n,brow,star;
printf("enter a odd number: ");
scanf("%d",&n);
if(n%2!=0)
{
    brow=(n+1)/2;
    for(i=1;i<=brow;i++)
    {
        for(star=1;star<=2*i-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=brow-1;i++) 
    {
        for(star=1;star<=(brow-i)*2-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
   

}
else
printf("invalid no.");

return 0;
}