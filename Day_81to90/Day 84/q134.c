// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    int n;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &n);

    s = n;

    if (s == SUCCESS)
        printf("Operation completed successfully.\n");
    else if (s == FAILURE)
        printf("Operation failed.\n");
    else if (s == TIMEOUT)
        printf("Operation timed out.\n");
    else
        printf("Invalid choice.\n");

    return 0;
}
