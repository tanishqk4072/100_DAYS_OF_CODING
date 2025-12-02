// Q145 (Enum)
// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopper(struct Student s[]) {
    int maxIndex = 0;
    for (int i = 1; i < 3; i++)
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;

    return s[maxIndex];
}

int main() {
    struct Student s[3] = {
        {"A", 1, 70},
        {"B", 2, 90},
        {"C", 3, 85}
    };

    struct Student t = getTopper(s);

    printf("Topper: %s %d %.2f\n", t.name, t.roll, t.marks);
    return 0;
}
