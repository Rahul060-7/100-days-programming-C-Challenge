// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0, start = 0, i, j, found;

    for (i = 0; i < n; i++) {
        found = 0;
        for (j = start; j < i; j++) {
            if (s[i] == s[j]) {
                start = j + 1;
                found = 1;
                break;
            }
        }
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}