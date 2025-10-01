//Find the sum of array elements.


#include <stdio.h>
int main(){
int a[100];
int n,i,sum=0;
printf("enter a number: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum+=a[i];
}
printf("%d",sum);
return 0;

}