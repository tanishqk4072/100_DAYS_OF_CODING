// Q150 (Enum / Struct / Pointer)
// Use pointer to struct to modify and display data using -> operator.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // allocate one student dynamically
    struct Student *p = (struct Student *) malloc(sizeof(struct Student));
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // get data from user
    printf("Enter name (single word), roll and marks: ");
    scanf("%s %d %f", p->name, &p->roll, &p->marks);

    // modify using pointer and -> operator
    // example modification: add 5 marks as bonus and change roll number
    p->marks = p->marks + 5.0f;
    p->roll = p->roll + 1;

    // display the modified data
    printf("\nModified Student Details:\n");
    printf("Name : %s\n", p->name);
    printf("Roll : %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);

    free(p);
    return 0;
}
