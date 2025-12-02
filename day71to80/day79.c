// Q129 (File Handling)
// A file numbers.txt contains a list of integers separated by spaces.
// Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *f = fopen("numbers.txt", "r");
    if (!f) { printf("Cannot open numbers.txt\n"); return 1; }

    int x, count = 0;
    long long sum = 0;
    while (fscanf(f, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(f);
    if (count == 0) { printf("No numbers found.\n"); return 0; }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
