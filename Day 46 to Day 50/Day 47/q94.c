// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[200], w[50], longest[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin); 

    s[strcspn(s, "\n")] = '\0';

    while (1) {
        if (s[i] != ' ' && s[i] != '\0')
            w[j++] = s[i];
        else {
            w[j] = '\0'; 
            if (strlen(w) > strlen(longest))
                strcpy(longest, w);
            j = 0;
            if (s[i] == '\0') break;
        }
        i++;
    }

    printf("\nLongest word: %s\n", longest);
    return 0;
}