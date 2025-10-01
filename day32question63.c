//Merge two arrays.
#include <stdio.h>
int main(){
    int n,m,i;
    int a[100],b[100],c[100];
    printf ("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value for %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the value for m: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("enter the value for %d: ",i);
        scanf("%d",&b[i]);
    }

    for (i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }
    for(i=0;i<m+n;i++)
      {  printf("%d ",c[i]);
      }


return 0;
}