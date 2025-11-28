// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    int n;

    printf("Enter month number (1-12): ");
    scanf("%d", &n);

    m = n - 1;   // because enum starts from 0

    if (m == JAN || m == MAR || m == MAY || m == JUL || m == AUG || m == OCT || m == DEC)
        printf("31 days\n");
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        printf("30 days\n");
    else if (m == FEB)
        printf("28 or 29 days\n");
    else
        printf("Invalid month\n");

    return 0;
}
