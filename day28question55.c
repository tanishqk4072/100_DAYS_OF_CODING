//Write a program to print all the prime numbers from 1 to n.



#include <stdio.h>
int main(){
int n,i,j,num=1;
printf("enter a number: ");
scanf("%d",&n);
if(n>1)
{
for(i=0;i<=n-1;i++)
{ 
    num=0;
    for(j=0;j<=i;j++)
    {
        if(i%j==0)
        {
            num++;
        }
    }
    if(num==2)
    {
        printf("%d  ",i);
    }
}

}
return 0;
}