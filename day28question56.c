// Read and print elements of a one-dimensional array.

#include <stdio.h>
int main(){
int n,i;
printf("enter the amount : ");
scanf("%d",&n);
int x[50];
for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }
for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

}