// Write a program to print the following pattern:
// *****
//   ****
//     ***
//       **
//         * 
#include <stdio.h>
int main(){
int row;
printf("enter the no. of rows: ");
scanf("%d",&row);

for (int i =1;i<=row;i++)
{
  for(int j=i; j<(2*i-1);j++)
  printf("  ");
  for (int k=0;k<=(row-i);k++)
  printf("*");

  printf("\n");
}
}