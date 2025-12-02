// Q124 (File Handling)
// Take two filenames from the user - a source file and a destination file.
// Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char src[100], dst[100];
    printf("Source filename: ");
    scanf("%s", src);
    printf("Destination filename: ");
    scanf("%s", dst);

    FILE *f1 = fopen(src, "r");
    if (!f1) { printf("Cannot open source.\n"); return 1; }
    FILE *f2 = fopen(dst, "w");
    if (!f2) { fclose(f1); printf("Cannot open destination.\n"); return 1; }

    int ch;
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    printf("File copied.\n");
    return 0;
}
