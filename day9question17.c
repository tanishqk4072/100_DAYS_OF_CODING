//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0)
        printf("Roots are Real and Distinct\n");
    else if (d == 0)
        printf("Roots are Real and Equal\n");
    else
        printf("Roots are Complex\n");

    return 0;
}
