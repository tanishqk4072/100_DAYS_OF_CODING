//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, i,  a  = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
        a = 1;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = 1;
            break;
        }
    }
    if (a== 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
