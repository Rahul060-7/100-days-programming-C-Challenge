// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}, i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}