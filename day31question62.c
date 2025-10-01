//Reverse an array without taking extra space.

#include <stdio.h>
int main(){
int x[50] ,y[50];
int i,n;
printf("enter the amount of no. you want to enter: ");
scanf("%d",&n);
for (i=0;i<n;i++)
{   printf("enter no %d: ",i );
    scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
    y[i]=x[n-1-i];
    printf("%d  ",y[i]);

}


}