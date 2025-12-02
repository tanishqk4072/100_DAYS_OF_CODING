// Q137 (Enum)
// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r = USER;

    if (r == ADMIN) printf("Welcome Admin\n");
    else if (r == USER) printf("Hello User\n");
    else printf("Guest Access\n");

    return 0;
}
