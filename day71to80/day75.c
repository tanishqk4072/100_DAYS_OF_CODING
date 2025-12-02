// Q125 (File Handling)
// Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char line[200];
    printf("Enter filename to append: ");
    scanf("%s", filename);
    getchar(); // consume newline

    FILE *f = fopen(filename, "a");
    if (!f) { printf("Cannot open file.\n"); return 1; }

    printf("Enter a line to append:\n");
    fgets(line, sizeof(line), stdin);
    fprintf(f, "%s", line);
    fclose(f);
    printf("Line appended.\n");
    return 0;
}
