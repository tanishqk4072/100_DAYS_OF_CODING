// Q121 (File Handling)
// Write a C program that creates a text file named info.txt in write mode.

#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    // remove newline
    for (int i=0; name[i] != '\0'; i++) if (name[i] == '\n') { name[i] = '\0'; break; }

    printf("Enter age: ");
    scanf("%d", &age);

    FILE *f = fopen("info.txt", "w");
    if (!f) { printf("Cannot create file.\n"); return 1; }
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data saved to info.txt\n");
    return 0;
}