// Q149 (Enum / Struct / Dynamic Memory)
// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("How many employees? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // allocate memory for n employees
    struct Employee *arr = (struct Employee *) malloc(n * sizeof(struct Employee));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // read employee details
    for (int i = 0; i < n; i++) {
        printf("Enter name (single word), id and salary for employee %d: ", i+1);
        scanf("%s %d %f", arr[i].name, &arr[i].id, &arr[i].salary);
    }

    // print employee details
    printf("\nEmployee List:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d: Name=%s, ID=%d, Salary=%.2f\n",
               i+1, arr[i].name, arr[i].id, arr[i].salary);
    }

    // free allocated memory
    free(arr);
    return 0;
}
