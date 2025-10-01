// Count positive, negative, and zero elements in an array.


#include <stdio.h>
int main() {
    int x[50];
    int i,n ,posi=0, zero=0,negi=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>0)
        posi++;
        else if(x[i]<0)
        negi++;
        else
        zero++;
    }
    printf("you entered %d positive no., %d negitive no. and %d zero ",posi,negi,zero);
    return 0;
    

}