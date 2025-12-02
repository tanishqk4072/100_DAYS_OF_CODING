// Q133 (Enum)
// Create an enum for months and print how many days each month has.

#include <stdio.h>

int main() {
    enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; // days[1] = Jan
    for (int m = JAN; m <= DEC; m++) {
        printf("Month %d has %d days\n", m, days[m]);
    }
    return 0;
}
