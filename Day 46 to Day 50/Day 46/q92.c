//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

char firstRepeatingLowercase(char str[]) {
    int freq[26] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                return str[i];
            }
        }
    }
    return 0;
}

int main() {
    char str[500];
    if (scanf("%499s", str) != 1) {
        return 0;
    }
    char c = firstRepeatingLowercase(str);
    if (c) {
        printf("%c\n", c);
    } else {
        printf("No repeating lowercase character found\n");
    }
    return 0;
}
