// Q126 (File Handling)
// Ask the user for a filename. Check if it exists by trying to open it in read mode.
// If file pointer is NULL, print an error; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char filename[100];
    char buffer[256];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if (!f) { printf("File does not exist.\n"); return 1; }

    printf("File contents:\n");
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        printf("%s", buffer);
    }
    fclose(f);
    return 0;
}
