// Q146 (Enum)
// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Tanishq", 101, {16, 11, 2024}};

    printf("Name: %s\nID: %d\nJoining: %d-%d-%d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
