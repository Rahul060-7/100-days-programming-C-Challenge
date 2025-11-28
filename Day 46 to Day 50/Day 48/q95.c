// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 


    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }


    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("Yes, it is a rotation.\n");
    else
        printf("No, it is not a rotation.\n");

    return 0;
}