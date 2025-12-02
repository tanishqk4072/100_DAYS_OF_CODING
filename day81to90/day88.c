// Q138 (Enum)
// Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {
    enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };
    const char *names[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

    for (int i = SUN; i <= SAT; i++) {
        printf("%s = %d\n", names[i], i);
    }
    return 0;
}
