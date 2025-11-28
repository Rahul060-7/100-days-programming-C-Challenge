//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (ch == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str[500], result[500];
    int j = 0;

    if (scanf("%499s", str) != 1) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}