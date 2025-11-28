// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

enum Gender { MALE = 0, FEMALE = 1, OTHER = 2 };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &g);

    p.gender = g;

    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");
    else
        printf("Invalid gender\n");

    return 0;
}
