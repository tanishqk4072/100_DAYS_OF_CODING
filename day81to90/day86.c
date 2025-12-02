// Q136 (Enum)
// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

int main() {
    enum Choice { ADD = 1, SUBTRACT, MULTIPLY };
    int a, b, op;

    printf("1-ADD, 2-SUBTRACT, 3-MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case ADD: printf("Result = %d\n", a + b); break;
        case SUBTRACT: printf("Result = %d\n", a - b); break;
        case MULTIPLY: printf("Result = %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
