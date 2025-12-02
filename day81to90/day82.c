// Q132 (Enum)
// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

int main() {
    enum Light { RED, YELLOW, GREEN } light;
    light = RED; // try RED, YELLOW or GREEN
    // simple loop to show all
    for (light = RED; light <= GREEN; light++) {
        if (light == RED) printf("RED -> Stop\n");
        else if (light == YELLOW) printf("YELLOW -> Wait\n");
        else printf("GREEN -> Go\n");
    }
    return 0;
}
