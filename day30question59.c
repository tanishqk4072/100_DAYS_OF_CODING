// Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int x[50];
    int i,n;
    int even=0, odd=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2 == 0)
        even++;
        else
        odd++;
    }
    printf("you enter %d even no. and %d odd no.",even,odd);
    return 0;
    

}