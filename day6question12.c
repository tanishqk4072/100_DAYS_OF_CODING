#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("Number is Zero\n");
        else
            printf("Number is Positive\n");
    } else {
        printf("Number is Negative\n");
    }

    return 0;
}
