//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, count = 0, i, prod;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        prod = 1;
        for (i = 0; i < count; i++)
            prod = prod * digit;
        sum = sum + prod;
        temp = temp / 10;
    }
    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
