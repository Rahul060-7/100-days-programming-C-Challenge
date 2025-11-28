// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter id: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEnter joining date (day month year): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", e.name);
    printf("ID            : %d\n", e.id);
    printf("Salary        : %.2f\n", e.salary);
    printf("Joining Date  : %02d-%02d-%04d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
