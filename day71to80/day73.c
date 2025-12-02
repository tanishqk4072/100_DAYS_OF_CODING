// Q123 (File Handling)
// Read a text file and count the total number of characters, words, and lines.
// A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if (!f) { printf("Cannot open file.\n"); return 1; }

    int chars = 0, words = 0, lines = 0;
    int inword = 0;
    int c;
    while ((c = fgetc(f)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) {
            inword = 0;
        } else {
            if (!inword) { words++; inword = 1; }
        }
    }
    fclose(f);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
