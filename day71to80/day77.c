// Q127 (File Handling)
// Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
// and writes the result to output.txt.

#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (!in) { printf("Cannot open input.txt\n"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (!out) { fclose(in); printf("Cannot create output.txt\n"); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) {
        if (c >= 'a' && c <= 'z') c = c - 32;
        fputc(c, out);
    }

    fclose(in);
    fclose(out);
    printf("Converted and saved to output.txt\n");
    return 0;
}
