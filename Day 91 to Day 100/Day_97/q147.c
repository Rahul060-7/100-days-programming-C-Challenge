// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // ---- Input from user ----
    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter id: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    // ---- Writing to binary file ----
    fp = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    // ---- Reading from binary file ----
    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    // ---- Displaying ----
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}
