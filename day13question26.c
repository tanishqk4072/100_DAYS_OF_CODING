//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while(i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
