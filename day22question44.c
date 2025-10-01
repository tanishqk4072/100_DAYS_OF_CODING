//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


#include <stdio.h>
int main(){
    int o,e,n;
    float sum=1;
    printf("enter a value for n: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
       o=(i*2)-1;
       e=i*2;
     sum+=((float)o/e);
    }    

  printf("the sum of the first %d is : %.1f",n,sum);

}