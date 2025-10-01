// Write a program to check if a number is a strong number.


#include <stdio.h>
int factorial(int a){
   int y=1;
   for(a;a>0;a--)
   {
    y*=a;
   }
   return y;
}

int sum_of_factorials(int a){
int x=0;
for(a;a>0;a/=10)
{
    if(a%10>0)
    {
        x+=factorial((a%10));
    }
    else if (a%10==0)
    {
        x+=1;
    }
    
}
return x;

}

int main(){
    int x,fac;
    printf("enter a no.: ");
    scanf("%d",&x);
    fac=sum_of_factorials(x);
    if (fac==x)
    printf("%d is a strong number.",x);
    else
    printf("%d is not a strong number. ",x);
    return 0;
}