// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s, *ptr;
    ptr = &s;

    printf("Enter name roll marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
