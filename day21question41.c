//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int swap(int x){
    int count=-1,a=x;
    int last_digit=(a%10),first_digit;
    while(a>0)
    {
        if(a/10==0)
        first_digit=(a);

        count++;
        a/=10;
    }
    first_digit=x/pow(10,count);
    int swaped_no=((x-((pow(10,count)*first_digit)+last_digit))+((pow(10,count)*last_digit)+first_digit));
    return swaped_no;

}
int main(){
    int a;
    printf("enter a no.: ");
    scanf("%d",&a);
    int b=swap(a);
    printf("%d",b);
    return 0;


}