// Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int x[50];
    int i,n;
    int even=0, odd=0;
    printf("enter the quantity of the numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

int ind_val,temp,numb;
printf("enter the index number: ");
scanf("%d",&ind_val);
printf("enter the number: ");
scanf("%d",&numb);

        for (i=n;i>=ind_val;i--)
    {
        temp=x[i];
        x[i]=numb;
        x[i+1]=temp;
    }

    for(i=0;i<=n;i++)
    {
        printf("%d ",x[i]);
    }




}