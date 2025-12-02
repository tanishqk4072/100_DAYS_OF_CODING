// Q130 (File Handling)
// Store multiple student records (name, roll number, marks) into a file using fprintf().
// Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    int n;
    printf("How many students to save? ");
    scanf("%d", &n);
    FILE *f = fopen("students.txt", "w");
    if (!f) { printf("Cannot create file.\n"); return 1; }

    for (int i = 0; i < n; i++) {
        char name[100];
        int roll, marks;
        printf("Name: ");
        getchar(); // clear newline
        fgets(name, sizeof(name), stdin);
        for (int j=0; name[j] != '\0'; j++) if (name[j] == '\n') { name[j] = '\0'; break; }
        printf("Roll: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);
        fprintf(f, "%s,%d,%d\n", name, roll, marks);
    }
    fclose(f);
    printf("Saved. Now reading back:\n");

    f = fopen("students.txt", "r");
    if (!f) { printf("Cannot open file.\n"); return 1; }
    char line[200];
    while (fgets(line, sizeof(line), f) != NULL) {
        char nm[100];
        int r,m;
        sscanf(line, "%[^,],%d,%d", nm, &r, &m);
        printf("Name: %s | Roll: %d | Marks: %d\n", nm, r, m);
    }
    fclose(f);
    return 0;
}
