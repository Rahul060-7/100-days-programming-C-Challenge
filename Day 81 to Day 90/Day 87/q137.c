// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    int n;

    printf("Enter 0 for ADMIN\n");
    printf("Enter 1 for USER\n");
    printf("Enter 2 for GUEST\n");
    printf("Your choice: ");
    scanf("%d", &n);

    r = n;

    if (r == ADMIN)
        printf("Welcome Admin! You have full access.\n");
    else if (r == USER)
        printf("Welcome User! You have limited access.\n");
    else if (r == GUEST)
        printf("Welcome Guest! View-only access.\n");
    else
        printf("Invalid role selected.\n");

    return 0;
}
