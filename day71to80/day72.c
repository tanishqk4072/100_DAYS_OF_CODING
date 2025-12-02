// Q122 (File Handling)
// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
// The program should print all lines until EOF is reached.

#include <stdio.h>

int main() {
    char line[256];
    FILE *f = fopen("info.txt", "r");
    if (!f) { printf("File not found.\n"); return 1; }
    printf("Contents of info.txt:\n");
    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
