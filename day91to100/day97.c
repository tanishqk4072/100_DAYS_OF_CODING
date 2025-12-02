// Q147 (Enum)
// Store employee data in a binary file using fwrite() 
// and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Tanishq", 100, 50000};

    FILE *f = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, f);
    fclose(f);

    struct Employee e2;

    f = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, f);
    fclose(f);

    printf("%s %d %.2f\n", e2.name, e2.id, e2.salary);
    return 0;
}
