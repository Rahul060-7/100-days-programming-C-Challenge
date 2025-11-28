// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Reading input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Printing output
    printf("\n\n--- Student Details ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name      : %s\n", s[i].name);
        printf("Roll No   : %d\n", s[i].roll_no);
        printf("Marks     : %.2f\n", s[i].marks);
    }

    return 0;
}
