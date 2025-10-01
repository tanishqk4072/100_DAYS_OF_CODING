//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, i = 31;
    unsigned int mask;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 31; i >= 0; i--) {
        mask = 1 << i;
        if (num & mask)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}
