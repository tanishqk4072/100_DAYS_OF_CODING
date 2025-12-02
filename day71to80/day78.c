// Q128 (File Handling)
// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>

int vowel(char c) {
    if (c >= 'A' && c <= 'Z') c = c + 32; // to lowercase
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if (!f) { printf("Cannot open file.\n"); return 1; }

    int c, vowels = 0, consonants = 0;
    while ((c = fgetc(f)) != EOF) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (vowel(c)) vowels++;
            else consonants++;
        }
    }
    fclose(f);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
