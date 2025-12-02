// Q144 (Enum)
// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("%s %d %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s = {"Tanishq", 1, 95.5};
    printStudent(s);
    return 0;
}
