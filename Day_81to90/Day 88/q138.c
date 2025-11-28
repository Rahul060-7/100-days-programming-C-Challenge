// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    char *names[] = {"ADMIN", "USER", "GUEST"};

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", names[r], r);
    }

    return 0;
}
