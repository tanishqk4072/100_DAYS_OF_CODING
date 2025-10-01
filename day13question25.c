//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &c);

    if(c == '+') 
    printf("Result = %d\n", a + b);
    else if(c == '-') 
    printf("Result = %d\n", a - b);
    else if(c == '*') 
    printf("Result = %d\n", a * b);
    else if(c == '/' && b != 0) 
    printf("Result = %d\n", a / b);
    else if(c == '%' && b != 0) 
    printf("Result = %d\n", a % b);
    else printf("Invalid input or division by zero\n");

    return 0;
}


