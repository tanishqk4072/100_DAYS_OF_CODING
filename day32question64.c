//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int num,count,digit;
    int x[10]={0};
    printf("enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        
        digit=num%10;
        x[digit]++;
        num/=10;

    }
    int max=x[0];
    for (int i=0;i<10;i++)
    {
        if (max<x[i])
        {max=x[i];
        digit=i;}
    }
    printf("%d occured most of time with the frequency of %d",digit,max);

}