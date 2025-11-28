// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct student s1, s2;
    int i, same = 1;

    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    for (i = 0; s1.name[i] != '\0' || s2.name[i] != '\0'; i++) {
        if (s1.name[i] != s2.name[i]) {
            same = 0;
            break;
        }
    }

    if (s1.roll != s2.roll)
        same = 0;

    if (s1.marks != s2.marks)
        same = 0;

    if (same == 1)
        printf("Same");
    else
        printf("Not Same");

    return 0;
}