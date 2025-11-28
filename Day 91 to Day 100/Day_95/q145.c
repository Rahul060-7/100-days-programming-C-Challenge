// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int size) {
    int i, top = 0;

    for(i = 1; i < size; i++) {
        if(s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];       // returning structure
}

int main() {
    struct Student s[5], topStudent;
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    topStudent = getTopStudent(s, 5);

    printf("\n\n--- Top Student ---\n");
    printf("Name      : %s\n", topStudent.name);
    printf("Roll No   : %d\n", topStudent.roll_no);
    printf("Marks     : %.2f\n", topStudent.marks);

    return 0;
}
